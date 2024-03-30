#include <reg51.h>

sbit Sw = P1^0; // Corrected syntax for declaring Sw

void main() {
    P1 = 0x08; // Corrected assignment of pl to P1
    while (1) {
        if (Sw == 1) {
            P0 = 0x55; // Corrected assignment of ox to 0x, and Po to P0
            P1 = 0x00; // Corrected assignment of Pa to P1
        } else {
            P0 = 0x00; // Corrected assignment of Po to P0
            P0 = 0xAA; // Corrected assignment of PQ to P0
        }
    }
}