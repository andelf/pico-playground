#include <stdio.h>

const uint8_t LOGO_RED[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x07, 0xe3, 0xff, 0xcf, 0xc0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xc7, 0xff, 0xe7, 0xf0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xcf, 0xff, 0xe7, 0xf8, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x8f, 0xff, 0xf3, 0xfc,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x0f, 0xff, 0xe1,
    0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x07, 0xff,
    0xe0, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfc, 0x03,
    0xff, 0xc0, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8,
    0x00, 0xff, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0xf0, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0xe0, 0xfc, 0x00, 0x7f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x81, 0xff, 0x00, 0xff, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0xff, 0x81, 0xff, 0xc1, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x83, 0xff, 0xe0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xc3, 0xff, 0xf0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x1f, 0xff, 0xc3, 0xff, 0xf0, 0xc0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x1f, 0xff, 0xc3, 0xff, 0xf8,
    0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x1f, 0xff, 0xc3, 0xff,
    0xf8, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x3f, 0xff, 0xc3,
    0xff, 0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0xff,
    0xc3, 0xff, 0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f,
    0xff, 0xc3, 0xff, 0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f,
    0x3f, 0xff, 0xc3, 0xff, 0xf8, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x7f, 0x3f, 0xff, 0xc1, 0xff, 0xf8, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x7e, 0x3f, 0xff, 0x81, 0xff, 0xf8, 0xfc, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x7e, 0x1f, 0xff, 0x00, 0xff, 0xf8, 0xfc, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x7e, 0x1f, 0xff, 0x00, 0xff, 0xf0, 0xfc, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x7e, 0x0f, 0xfe, 0x00, 0x7f, 0xf0, 0xfc, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x07, 0xfc, 0x18, 0x1f, 0xe0, 0x78,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x03, 0xf0, 0xff, 0x07, 0x80,
    0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x01, 0xff, 0x80,
    0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x03, 0xff,
    0xe0, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
    0xff, 0xe0, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0,
    0x0f, 0xff, 0xf0, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0xf8, 0x0f, 0xff, 0xf0, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0xfc, 0x0f, 0xff, 0xf0, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x03, 0xfc, 0x0f, 0xff, 0xf0, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0xfe, 0x0f, 0xff, 0xf8, 0xff, 0xc0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0xff, 0x0f, 0xff, 0xf1, 0xff, 0xc0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x8f, 0xff, 0xf1, 0xff, 0xc0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x8f, 0xff, 0xf3, 0xff, 0xc0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x87, 0xff, 0xe3, 0xff,
    0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xc7, 0xff, 0xe7,
    0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc3, 0xff,
    0xc7, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc1,
    0xff, 0x87, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
    0xc0, 0x7e, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x7f, 0xc0, 0x00, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x3f, 0xc0, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0f, 0x80, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xe0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xe0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff,
    0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

const uint8_t LOGO_BLACK[] = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x1f, 0xff, 0xf8, 0x01, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf8, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xe0, 0x0d, 0x00, 0xff, 0x00, 0xb0, 0x07, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x3f, 0xa8, 0x7e, 0x15, 0xfc, 0xc3,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xfc, 0x3c, 0x3f, 0xff,
    0x81, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xfd, 0x3c, 0xbf,
    0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xff, 0x99,
    0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xbf, 0xff,
    0x99, 0xff, 0xfd, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xef,
    0xff, 0xc3, 0xff, 0xf7, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7,
    0xfb, 0xff, 0xc3, 0xff, 0xdf, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc7, 0xfc, 0xff, 0xc3, 0xff, 0x3f, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xc7, 0xff, 0x3f, 0xc3, 0xfc, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe3, 0xff, 0x9f, 0xc3, 0xf9, 0xff, 0xc7, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xe7, 0xff, 0xc7, 0xc3, 0xe3, 0xff, 0xe7, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xf3, 0xc3, 0xcf, 0xff, 0xc7, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xf9, 0x81, 0x9f, 0xff, 0x8f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xfc, 0x00, 0x3f, 0xff,
    0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xfc, 0x00, 0x7f,
    0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xfc, 0x00,
    0x3f, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xfc,
    0x00, 0x3f, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f,
    0xf8, 0x00, 0x1f, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x0f, 0xf0, 0x00, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x83, 0x80, 0x00, 0x01, 0xc1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe0, 0x00, 0x7c, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x07, 0xe3, 0xff, 0xcf, 0xc1, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xc7, 0xff, 0xe7, 0xf0, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xcf, 0xff, 0xe7, 0xf8, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0x8f, 0xff, 0xf3, 0xfc,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0x0f, 0xff, 0xe1,
    0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xfe, 0x07, 0xff,
    0xe0, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xfc, 0x03,
    0xff, 0xc0, 0x7f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xf8,
    0x00, 0xff, 0x00, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1,
    0xf0, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf1, 0xe0, 0xfc, 0x00, 0x7f, 0x0f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf1, 0x81, 0xff, 0x00, 0xff, 0x87, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf0, 0x03, 0xff, 0x81, 0xff, 0xc1, 0x1f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf0, 0x07, 0xff, 0x83, 0xff, 0xe0, 0x0f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xc3, 0xff, 0xf0, 0x07, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc6, 0x1f, 0xff, 0xc3, 0xff, 0xf0, 0xc3,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8e, 0x1f, 0xff, 0xc3, 0xff, 0xf8,
    0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1e, 0x1f, 0xff, 0xc3, 0xff,
    0xf8, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1e, 0x3f, 0xff, 0xc3,
    0xff, 0xf8, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x3f, 0xff,
    0xc3, 0xff, 0xf8, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0x3f,
    0xff, 0xc3, 0xff, 0xf8, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f,
    0x3f, 0xff, 0xc3, 0xff, 0xf8, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0x7f, 0x3f, 0xff, 0xc1, 0xff, 0xf8, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfe, 0x7e, 0x3f, 0xff, 0x81, 0xff, 0xf8, 0xfc, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0x7e, 0x1f, 0xff, 0x00, 0xff, 0xf8, 0xfc, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfe, 0x7e, 0x1f, 0xff, 0x00, 0xff, 0xf0, 0xfc, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfe, 0x7e, 0x0f, 0xfe, 0x00, 0x7f, 0xf0, 0xfc, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x3e, 0x07, 0xfc, 0x18, 0x1f, 0xe0, 0x78,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3c, 0x03, 0xf0, 0xff, 0x07, 0x80,
    0x78, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3c, 0x00, 0x01, 0xff, 0x80,
    0x00, 0x79, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x18, 0x00, 0x03, 0xff,
    0xe0, 0x00, 0x31, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x07,
    0xff, 0xe0, 0x0f, 0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x81, 0xe0,
    0x0f, 0xff, 0xf0, 0x1f, 0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3,
    0xf8, 0x0f, 0xff, 0xf0, 0x3f, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc3, 0xfc, 0x0f, 0xff, 0xf0, 0x7f, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xc3, 0xfc, 0x0f, 0xff, 0xf0, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe3, 0xfe, 0x0f, 0xff, 0xf8, 0xff, 0xc7, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xe3, 0xff, 0x0f, 0xff, 0xf1, 0xff, 0xc7, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0x8f, 0xff, 0xf1, 0xff, 0xcf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0x8f, 0xff, 0xf3, 0xff, 0xcf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0x87, 0xff, 0xe3, 0xff,
    0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xc7, 0xff, 0xe7,
    0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xc3, 0xff,
    0xc7, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xc1,
    0xff, 0x87, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff,
    0xc0, 0x7e, 0x07, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0x7f, 0xc0, 0x00, 0x07, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfe, 0x3f, 0xc0, 0x00, 0x03, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x0f, 0x80, 0x00, 0x03, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0x80, 0x01, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xf0, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xf0, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0f, 0xff, 0xe0, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0xff, 0xe1,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff,
    0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,
    0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf0, 0x18, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfc, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff

};
