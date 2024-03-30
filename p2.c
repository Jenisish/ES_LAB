#include <reg51.h>

void main() {
    signed char i;

    for (i = -4; i < 5; i++) {
       
        P1 = i;
    }

    while(1);
}
