#include <reg51.h>

void delay(unsigned int k) {
    unsigned int i, j;
    for (i = 0; i < k; i++) {
        for (j = 0; j < 1275; j++); // Corrected the semicolon position
    }
}

void main(void) {
    unsigned int i;
    P1 = 0x00;
    while (1) {
        for (i = 0; i < 255; i++) {
            P1 = 1;
            delay(1);
        }
        for (i = 255; i > 0; i--) {
            P1 = 0;
            delay(1);
        }
    }
}