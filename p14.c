#include <reg51.h>

void main() {
    unsigned char mydata;

    TMOD = 0x20; // Timer 1, 8-bit Autoreload

    TH1 = 0xFD; // 9600 Baud rate

    SCON = 0x50; // Mode 1, reception enable

    TR1 = 1; // Start Timer 1

    while (1) {
        SBUF = 'A'; // Load value in buffer
        while (TI == 0); // Wait until transmission is over
        TI = 0; // Reset transmission flag
    }
}