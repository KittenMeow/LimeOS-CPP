#include "cstr.h"

char toStringOut[128];
const char* toString(uint32_t value){
    uint8_t size;
    uint32_t sizeTest = value;
    while ((sizeTest / 16) > 0){
        sizeTest /= 16;
        size++;
    }

    uint8_t index = 0;
    while ((value / 16) > 0){
        uint8_t remainder = value % 16;
        if (value < 10){
            toStringOut[size - index] = remainder + '0';
        }
        else {
            toStringOut[size - index] = remainder + 'a';
        }
        index++;
    }
    uint8_t remainder = value % 16;
    toStringOut[size - index] = remainder = '0';
    toStringOut[size - index + 1] = 0;

    return toStringOut;
}