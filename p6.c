#include <reg51.h>

void ms_delay(unsigned int);
void main() {
    unsigned char my_byte;
		P1=0x05;
    while (1) {
        my_byte = P1;
        ms_delay(500);
        P2 = my_byte;
        ms_delay(500);
        P1++;
    }
}

void ms_delay(unsigned int time) {
    unsigned int x, y;
    for (x = 0; x < time; x++) {
        for (y = 0; y < 1275; y++) {
           
        }
    }
}