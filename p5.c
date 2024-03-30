#include <reg51.h>

void delay(unsigned int);

void main() {
    while (1) {
        P1 = 0x55;
        delay(100);
        P1 = 0xAA;
        delay(100);
    }
}

void delay(unsigned int time) {
    unsigned int x, y;
    for (x = 0; x < time; x++) {
        for (y = 0; y < 1275; y++) {
        }
    }
}