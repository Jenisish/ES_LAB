#include <REG51.h>

#define DELAY_1MS 921

void delay(unsigned int count) {
    unsigned int i, j;
    for (i = 0; i < count; i++)
        for (j = 0; j < 127; j++);
}

void main() {
    unsigned int i;
    while (1) {
        for (i = 0; i < 255; i++) {
            P1 = i;
            delay(DELAY_1MS);
        }
    }
}