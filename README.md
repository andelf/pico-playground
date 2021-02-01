# pico-playground
Personal project for Raspberry Pi Pico

## OpenOCD Setting

Use FT2232H breakout boards, from CJMCU, labeled CJMCU-2232HL.

Wiring:

```text
ADBUS0    TCK        SWDCLK
ADBUS1    TDO/DI     SWDIO
ADBUS2    TDI/DO     SWDIO
GND - GND
3V3 - VSYS
```

Must add a 470 Ohm resistor between TDO/TDI.
