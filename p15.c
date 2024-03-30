#include <reg51.h>

void main() {
    int i = 61;

    TMOD = 0x20; // Use Timer 1, 8-bit Autoreload
    TH1 = 0xFA;  // 4800 baud rate
    SCON = 0x50; // Mode 1, reception enable
    TR1 = 1;     // Start Timer1

    while (1) {
        SBUF = i; // Load value into buffer
        while (TI == 0); // Wait until Transmission is Over
        TI = 0;
    }
}