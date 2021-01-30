#include <stdio.h>
#include <string.h>

#include "hardware/spi.h"
#include "pico/stdlib.h"

#include "logo.h"
/*
GP18 => SCL
GP19 => SDA
GP20 => RES
GP21 => DC
GP22 => CS
GP23 => BUSY
*/

#define PIN_LED 25

#define PIN_MISO 16
#define PIN_SCK 18
#define PIN_MOSI 19
#define PIN_RES 20
#define PIN_DC 21
#define PIN_CS 22
#define PIN_BUSY 26

#define PIN_RST PIN_RES
#define PIN_SDA PIN_MOSI

#define SPI_PORT spi0

#define EPD_WIDTH 104
#define EPD_HEIGHT 212


// SSD1675A
// clang-format off
const uint8_t LUT_FULL_UPDATE_[] = {
    // spi_demo.c 2
    0xA5, 0x89, 0x10, 0x00, 0x00, 0x00, 0x00,
    0xA5, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00,
    0xA5, 0xA9, 0x9B, 0x00, 0x00, 0x00, 0x00,
    0xA5, 0xA9, 0x9B, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    0x0F, 0x0F, 0x0F, 0x0F, 0x04,
    0x10, 0x10, 0x0A, 0x0A, 0x02,
    0x08, 0x08, 0x09, 0x80, 0x02, // mod 最后重复次数
    0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00,
};

// from EN_Program_Upgrade_GDEM0154E97LT.pdf
const uint8_t LUT_FULL_UPDATE[] = {
  0x02, 0x48, 0x48, 0x10, 0x10, 0x10, 0x04,
  0x04, 0x48, 0x48, 0x80, 0x00, 0x00, 0x20,
  0xA2, 0x48, 0x48, 0x09, 0x2B, 0x2B, 0xC3,
  0xA2, 0x48, 0x48, 0x09, 0x2B, 0x2B, 0xC3,
  0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00,

  0x2A, 0x27, 0x38, 0x71, 0x00,
  0x02, 0x00, 0x02, 0x00, 0x0A,
  0x12, 0x01, 0x12, 0x01, 0x03,
  0x05, 0x10, 0x00, 0x03, 0x03,
  0x05, 0x03, 0x00, 0x2A, 0x06,
  0x03, 0x02, 0x01, 0x28, 0x05,
  0x0A, 0x09, 0x04, 0x0A, 0x03,
};

// From a rust code
const uint8_t LUT_FULL_UPDATE__[] = {
    0x48, 0xa0, 0x10, 0x10, 0x13, 0x00, 0x00,
    0x48, 0xa0, 0x80, 0x00, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x48, 0xa5, 0x00, 0xbb, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    0x40, 0x0c, 0x20, 0x0c, 0x02,
    0x10, 0x08, 0x04, 0x04, 0x02,
    0x04, 0x08, 0x08, 0x10, 0x02,
    0x02, 0x02, 0x02, 0x40, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00,
};

// black & white partial
static const uint8_t LUT_1[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // LUT0: BB:     VS 0 ~7
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // LUT1: BW:     VS 0 ~7
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // LUT2: WB:     VS 0 ~7
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // LUT3: WW:     VS 0 ~7
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // LUT4: VCOM:   VS 0 ~7
    0x0A, 0x00, 0x00, 0x00, 0x02,              // TP0 A~D RP0
    0x00, 0x00, 0x00, 0x00, 0x00,              // TP1 A~D RP1
    0x00, 0x00, 0x00, 0x00, 0x00,              // TP2 A~D RP2
    0x00, 0x00, 0x00, 0x00, 0x00,              // TP3 A~D RP3
    0x00, 0x00, 0x00, 0x00, 0x00,              // TP4 A~D RP4
    0x00, 0x00, 0x00, 0x00, 0x00,              // TP5 A~D RP5
    0x00, 0x00, 0x00, 0x00, 0x00,              // TP6 A~D RP6
};

// black & white
static const uint8_t LUT_2[] = {
    0x80, 0x60, 0x40, 0x00, 0x00, 0x00, 0x00,  // LUT0: BB:     VS 0 ~7
    0x10, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00,  // LUT1: BW:     VS 0 ~7
    0x80, 0x60, 0x40, 0x00, 0x00, 0x00, 0x00,  // LUT2: WB:     VS 0 ~7
    0x10, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00,  // LUT3: WW:     VS 0 ~7
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // LUT4: VCOM:   VS 0 ~7
    0x03, 0x03, 0x00, 0x00, 0x02,              // TP0 A~D RP0
    0x09, 0x09, 0x00, 0x00, 0x02,              // TP1 A~D RP1
    0x03, 0x03, 0x00, 0x00, 0x02,              // TP2 A~D RP2
    0x00, 0x00, 0x00, 0x00, 0x00,              // TP3 A~D RP3
    0x00, 0x00, 0x00, 0x00, 0x00,              // TP4 A~D RP4
    0x00, 0x00, 0x00, 0x00, 0x00,              // TP5 A~D RP5
    0x00, 0x00, 0x00, 0x00, 0x00,              // TP6 A~D RP6
};
// clang-format on

static inline void cs_select() {
  asm volatile("nop \n nop \n nop");
  gpio_put(PIN_CS, 0); // Active low
  asm volatile("nop \n nop \n nop");
}

static inline void cs_deselect() {
  asm volatile("nop \n nop \n nop");
  gpio_put(PIN_CS, 1);
  asm volatile("nop \n nop \n nop");
}

static inline void command_mode() { gpio_put(PIN_DC, 0); }

static inline void data_mode() { gpio_put(PIN_DC, 1); }

static void epd_send_command(uint8_t reg) {
  command_mode();
  cs_select();
  spi_write_blocking(SPI_PORT, &reg, 1);
  cs_deselect();
}

static void epd_send_data(uint8_t data) {
  data_mode();
  cs_select();
  spi_write_blocking(SPI_PORT, &data, 1);
  cs_deselect();
}

void epd_interface_init() {
  spi_init(SPI_PORT, 1000 * 1000);
  gpio_set_function(PIN_MISO, GPIO_FUNC_SPI);
  gpio_set_function(PIN_SCK, GPIO_FUNC_SPI);
  gpio_set_function(PIN_MOSI, GPIO_FUNC_SPI);

  // LOW=NOT BUSY
  gpio_init(PIN_BUSY);
  gpio_set_dir(PIN_BUSY, GPIO_IN);

  gpio_init(PIN_RES);
  gpio_set_dir(PIN_RES, GPIO_OUT);

  gpio_init(PIN_DC);
  gpio_set_dir(PIN_DC, GPIO_OUT);

  // Chip select is active-low
  gpio_init(PIN_CS);
  gpio_set_dir(PIN_CS, GPIO_OUT);
  gpio_put(PIN_CS, 1); // deselect
}

void epd_hw_reset() {
  gpio_put(PIN_RST, 1);
  sleep_ms(200);
  gpio_put(PIN_RST, 0);
  sleep_ms(10);
  gpio_put(PIN_RST, 1);
  sleep_ms(200);
}

void epd_busy_wait() {
  while (gpio_get(PIN_BUSY) == 1) {
    sleep_ms(1);
  }
}

void epd_turn_on_display() {
  epd_send_command(0x22); // Display Update Control 2
  epd_send_data(0xC7);
  epd_send_command(0x20); // Master Activation
  epd_busy_wait();
}

void epd_init() {
  epd_hw_reset();

  epd_busy_wait();
  epd_send_command(0x12); // soft reset
  epd_busy_wait();

  epd_send_command(0x74);
  epd_send_data(0x54);
  epd_send_command(0x7E);
  epd_send_data(0x3B);

  epd_send_command(0x01);
  epd_send_data(0xd3);
  epd_send_data(0x00);
  epd_send_data(0x00);

  epd_send_command(0x11);
  epd_send_data(0b11);

  epd_send_command(0x44); // x address range
  epd_send_data(0x00);
  epd_send_data(0x0c);

  epd_send_command(0x45); // y address range
  epd_send_data(0x00);
  epd_send_data(0x00);
  epd_send_data(0xd3);
  epd_send_data(0x00);

  epd_send_command(0x3C); // border waveform
  // Use LUT
  epd_send_data(0xC0); // 0b11

  epd_send_command(0x2C); // VCOM
  epd_send_data(0x55);

  // LUT
  // 0x15, 0x41, 0xA8, 0x32, 0x30, 0x0A
  // 0x17, 0x41, 0xAC, 0x32, 0x1B, 0x07
  epd_send_command(0x03);
  epd_send_data(0x15);

  epd_send_command(0x04);
  epd_send_data(0x41);
  epd_send_data(0xA8);
  epd_send_data(0x32);

  epd_send_command(0x3A); // dummy line
  epd_send_data(0x30);

  epd_send_command(0x3B); // gate time
  epd_send_data(0x0A);

  epd_send_command(0x32);
  for (int i = 0; i < 70; i++) {
    epd_send_data(LUT_FULL_UPDATE[i]);
    // epd_send_data(LUT_2[i]);
  }

  epd_send_command(0x4E); // x count
  epd_send_data(0x00);

  epd_send_command(0x4F); // y count
  // epd_send_data(0xd3);
  // epd_send_data(0x00);
  epd_send_data(0x00);
  epd_send_data(0x00);

  epd_busy_wait();
}

void epd_clear() {
  int width = (EPD_WIDTH % 8 == 0) ? (EPD_WIDTH / 8) : (EPD_WIDTH / 8 + 1);

  epd_send_command(0x24);
  for (int j = 0; j < EPD_HEIGHT; j++) {
    for (int i = 0; i < width; i++) {
      epd_send_data(0xff);
    }
  }

  epd_send_command(0x26);
  for (int j = 0; j < EPD_HEIGHT; j++) {
    for (int i = 0; i < width; i++) {
      epd_send_data(0x00);
    }
  }

  epd_turn_on_display();
}

void epd_display_black(uint8_t *fb) {
  int width = (EPD_WIDTH % 8 == 0) ? (EPD_WIDTH / 8) : (EPD_WIDTH / 8 + 1);

  epd_send_command(0x24);
  for (int j = 0; j < EPD_HEIGHT; j++) {
    for (int i = 0; i < width; i++) {
      epd_send_data(fb[i + j * width]);
    }
  }

  epd_turn_on_display();
}

void epd_display_red(uint8_t *fb) {
  int width = (EPD_WIDTH % 8 == 0) ? (EPD_WIDTH / 8) : (EPD_WIDTH / 8 + 1);

  epd_send_command(0x26);
  for (int j = 0; j < EPD_HEIGHT; j++) {
    for (int i = 0; i < width; i++) {
      epd_send_data(fb[i + j * width]);
    }
  }

  epd_turn_on_display();
}

void epd_display(uint8_t *fb_black, uint8_t *fb_red) {
  int width = (EPD_WIDTH % 8 == 0) ? (EPD_WIDTH / 8) : (EPD_WIDTH / 8 + 1);

  epd_send_command(0x24);
  for (int j = 0; j < EPD_HEIGHT; j++) {
    for (int i = 0; i < width; i++) {
      epd_send_data(fb_black[i + j * width]);
    }
  }

  epd_send_command(0x26);
  for (int j = 0; j < EPD_HEIGHT; j++) {
    for (int i = 0; i < width; i++) {
      epd_send_data(fb_red[i + j * width]);
    }
  }

  epd_turn_on_display();
}

void epd_sleep() {
  epd_send_command(0x22); // save power
  epd_send_data(0xC3);
  epd_send_data(0x20);

  epd_send_command(0x10); // power off
  epd_send_data(0x01);

  sleep_ms(100);
}

uint8_t FB_BLACK[2756];
uint8_t FB_RED[2756];

int main() {
  gpio_init(PIN_LED);
  gpio_set_dir(PIN_LED, GPIO_OUT);

  epd_interface_init();

  epd_init();

  // gpio_put(PIN_LED, 1);

  // epd_clear();

  // epd_turn_on_display();
  memset(FB_BLACK, 0xff, sizeof(FB_BLACK)); // all white
  memset(FB_RED, 0x00, sizeof(FB_RED));     // all non-red

  memcpy(FB_BLACK, LOGO_BLACK, sizeof(LOGO_BLACK));
  memcpy(FB_RED, LOGO_RED, sizeof(LOGO_RED));

  memcpy(FB_BLACK + sizeof(LOGO_BLACK), LOGO_BLACK, sizeof(LOGO_BLACK));
  memcpy(FB_RED + sizeof(LOGO_RED), LOGO_RED, sizeof(LOGO_RED));

  // epd_display_black(BLACK_FB);
  epd_display(FB_BLACK, FB_RED);

  epd_sleep();

  while (true) {
    gpio_put(PIN_LED, 1);
    sleep_ms(500);
    gpio_put(PIN_LED, 0);
    sleep_ms(500);
  }
}
