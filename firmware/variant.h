#define ARDUINO_ARCH_AVR

#define SERIAL_MODULE
#define SERIAL_RX_PIN 9   // RX du module Meshtastic (reçoit depuis Arduino TX)
#define SERIAL_TX_PIN 8   // TX du module Meshtastic (envoie vers Arduino RX)
#define SERIAL_BAUD 9600
#define UART_PORT uart1  //pas sur

#define HAS_GPS 1
#define GPS_RX_PIN (1u)
#define GPS_TX_PIN (0u)


#define EXT_NOTIFY_OUT 6
#define BUTTON_PIN 7
#define BUTTON_NEED_PULLUP

#define LED_PIN 13

#define BATTERY_PIN 26
// ratio of voltage divider = 3.0 (R17=200k, R18=100k)
#define ADC_MULTIPLIER 3.1 // 3.0 + a bit for being optimistic
#define BATTERY_SENSE_RESOLUTION_BITS ADC_RESOLUTION

#define USE_RF95
//#define USE_SX1262

#undef LORA_SCK
#undef LORA_MISO
#undef LORA_MOSI
#undef LORA_CS

#define LORA_SCK 10
#define LORA_MISO 12
#define LORA_MOSI 11
#define LORA_CS 3

#define LORA_DIO0 14
#define LORA_RESET 15
#define LORA_DIO1 27
#define LORA_DIO2 RADIOLIB_NC
#define LORA_DIO3 RADIOLIB_NC

#define HAS_NEOPIXEL
#define NEOPIXEL_COUNT 1
#define NEOPIXEL_DATA 16
#define NEOPIXEL_TYPE (NEO_GRB + NEO_KHZ800)
