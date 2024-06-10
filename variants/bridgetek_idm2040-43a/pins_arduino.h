#pragma once

// Pin definitions taken from: DS_IDM2040-43A.pdf


// LEDs
#define PIN_LED        (25u)

// Serial (Table 7 CN14 Pinout )
#define PIN_SERIAL1_TX (0u)
#define PIN_SERIAL1_RX (1u)

// Table 2 CN2 & CN7 Pinout
#define PIN_SERIAL2_TX (20u)
#define PIN_SERIAL2_RX (21u)

// SPI (Table 6 CN13 Pinout )
#define PIN_SPI1_MISO  (12u)
#define PIN_SPI1_MOSI  (11u)
#define PIN_SPI1_SCK   (10u)
#define PIN_SPI1_SS    (22u)

// Table 2 CN2 & CN7 Pinout
#define PIN_SPI1_MISO  (19u)
#define PIN_SPI1_MOSI  (20u)
#define PIN_SPI1_SCK   (18u)
#define PIN_SPI1_SS    (21u)

// default spi
#define PIN_SD_MOSI    PIN_SPI1_MOSI
#define PIN_SD_MISO    PIN_SPI1_MISO
#define PIN_SD_SCK     PIN_SPI1_SCK
#define PIN_SD_SS      PIN_SPI1_SS
#define SDCARD_DETECT  33

// Wire (TTable 2 CN2 & CN7 Pinout)
#define PIN_WIRE0_SDA  (20u)
#define PIN_WIRE0_SCL  (21u)

// Wire (TTable 2 CN2 & CN7 Pinout)
#define PIN_WIRE1_SDA  (18u)
#define PIN_WIRE1_SCL  (19u)

#define SERIAL_HOWMANY (3u)
#define SPI_HOWMANY    (2u)
#define WIRE_HOWMANY   (2u)

#include "../generic/common.h"
