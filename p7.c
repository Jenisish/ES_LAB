#include <reg51.h>

void main() {
    P1 = 0x00;
    P2 = 0x00;
    for (;;) {
        P1++;
        P2++;
    }
}