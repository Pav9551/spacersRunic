// see http://blog.squix.org/2015/05/esp8266-nodemcu-how-to-create-xbm.html
#define Volk_width 76
#define Volk_height 64
const char Volk_bits[] PROGMEM = {
  0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE6, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC6, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x06, 0x06, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x3C, 0x06, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x06, 
  0xF8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x07, 0xF0, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x0F, 0xE0, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xFC, 0x0F, 0xCC, 0x07, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xF8, 0x0F, 0xCC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xF8, 0x0F, 0xD8, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x1F, 
  0x98, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x1F, 0xFA, 0xFF, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x3F, 0xFE, 0xFF, 0x07, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xF0, 0xFF, 0xFF, 0xFF, 0xFD, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 
  0xFF, 0xFF, 0xF3, 0x03, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 
  0xCF, 0x07, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x9F, 0x0F, 
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x3E, 0x00, 0x00, 
  0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7C, 0x00, 0x00, 0x00, 0xC0, 
  0x7F, 0xE0, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0xE0, 0x1F, 0x10, 
  0xFF, 0xFF, 0xFF, 0xF1, 0x01, 0x00, 0x00, 0xF0, 0x87, 0x01, 0xF8, 0xFF, 
  0xFF, 0xC1, 0x03, 0x00, 0x00, 0xF8, 0xE3, 0x0F, 0xF0, 0xFF, 0xFF, 0x83, 
  0x07, 0x00, 0x00, 0xF0, 0x71, 0x7C, 0xE0, 0xFF, 0xFF, 0x03, 0x0F, 0x00, 
  0x00, 0xE0, 0xFC, 0x27, 0xC0, 0xFF, 0x7F, 0x07, 0x1E, 0x00, 0x00, 0xE0, 
  0xC4, 0x00, 0x80, 0xFF, 0x7F, 0x06, 0x3E, 0x00, 0x00, 0x78, 0x00, 0x00, 
  0x80, 0xFF, 0xFF, 0x00, 0x7C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x80, 0xFF, 
  0xFF, 0x00, 0x78, 0x00, 0x00, 0x07, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x00, 
  0xF0, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x00, 0xE0, 0x01, 
  0xE0, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x00, 0xC0, 0x01, 0x30, 0x00, 
  0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x00, 0xC0, 0x03, 0x3C, 0x00, 0x00, 0x00, 
  0xD0, 0xFF, 0xFF, 0x40, 0xFF, 0x07, 0x3E, 0x00, 0x00, 0x00, 0xF0, 0xFF, 
  0x7F, 0xF0, 0xFF, 0x07, 0x3F, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x7F, 0xFE, 
  0xFF, 0x0F, 0x3E, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x3F, 0xFF, 0x03, 0x00, 
  0x1E, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x1C, 0x00, 
  0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 
  0xFE, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0xFF, 0xFF, 
  0x7F, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x80, 0x09, 0xFF, 0xFF, 0x1F, 0x00, 
  0x00, 0x00, 0x80, 0x01, 0xFE, 0x8F, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 
  0x00, 0xE7, 0x2F, 0x8F, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x7C, 
  0x00, 0xD8, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x7F, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x1D, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x1C, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xC0, 0xFF, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x7F, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 
  0x00, 0x00, 0x00, 0x00, };
#define width 128
#define height 64
const char ninja[]PROGMEM = {
  0x00, 0x00, 0xC0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xE0, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x0F, 0x00, 0x00, 
  0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x78, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0xE0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 
  0x00, 0xC0, 0x01, 0xF8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1E, 0x00, 0xF0, 0xFF, 0x07, 0xFE, 0x1F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0xFC, 0xFF, 0x0F, 0xFF, 
  0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 
  0x1F, 0x00, 0xBC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0xFF, 0x01, 0x00, 0xF0, 0xFF, 0x7F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xE0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0xF0, 0xFF, 
  0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0x1F, 0x00, 0xF0, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xE0, 0x7F, 0x00, 0xF0, 0xFF, 0xFF, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x01, 0xF0, 0xFF, 
  0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 
  0xFF, 0x03, 0xE0, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xC0, 0xFF, 0x03, 0xE0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0x03, 0x40, 0xFE, 
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x7F, 0x7C, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 
  0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x03, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0x7F, 0x80, 0xFF, 
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0xFF, 0x7F, 0x80, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0xF9, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x03, 0x00, 0x00, 0x0E, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x06, 
  0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x3F, 0x04, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x03, 0x00, 0x07, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 
  0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x0F, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x0E, 0x80, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 
  0x0E, 0x80, 0x03, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xC0, 0x01, 0x0C, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xC0, 0x01, 0x0E, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x7F, 0xE0, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xF8, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0xFC, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3C, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x60, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x3F, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0xF8, 0xFF, 
  0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x0E, 0xF8, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0xF8, 0xFF, 0xFF, 0xFF, 0x07, 0x80, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0xF8, 0xFF, 
  0xFF, 0xFF, 0x07, 0x00, 0xFC, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x1E, 0xF8, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0xFC, 0xFF, 0x1F, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0xF0, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 
  0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xF0, 0xFF, 
  0xFF, 0xFF, 0x07, 0xF0, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xF0, 0xF1, 0xFF, 0xFF, 0xFF, 0x07, 0xF8, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 
  0x00, 0x00, 0x00, 0x00, };
