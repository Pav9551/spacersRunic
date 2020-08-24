#if defined(__AVR__)
    #include <avr/pgmspace.h>
    #define imagedatatype const uint8_t
#elif defined(__PIC32MX__)
    #define PROGMEM
    #define imagedatatype const unsigned char
#elif defined(__arm__)
    #define PROGMEM
    #define imagedatatype const unsigned char
#endif
extern imagedatatype test_bound[];
extern imagedatatype contue_on_next_line[];
extern imagedatatype one[];
extern imagedatatype two[];
extern imagedatatype three[];
extern imagedatatype four[];
extern imagedatatype five[];
extern imagedatatype six[];
extern imagedatatype seven[];
extern imagedatatype eigth[];
extern imagedatatype nine[];
extern imagedatatype zero[];
extern imagedatatype mars[];
extern imagedatatype venus[];
extern imagedatatype saturn[];
extern imagedatatype earth[];
extern imagedatatype pull[];
extern imagedatatype foward[];
extern imagedatatype rotate_clokwise[];
extern imagedatatype near[];
extern imagedatatype rotate_rigtht[];
extern imagedatatype surround[];
extern imagedatatype conjuction[];
extern imagedatatype tell[];
extern imagedatatype no[];
extern imagedatatype girl[];
extern imagedatatype ninja[];
