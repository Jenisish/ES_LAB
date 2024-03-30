#include <reg51.h>
#include <stdio.h>

void main()
{
    SCON = 0x50; // Serial mode 1, 8-bit UART, baud rate set by timer 1
    TMOD = 0x20; // Timer 1 in mode 2, 8-bit auto-reload
    TH1 = 0xFD; // Reload value for timer 1 for 1200 baud rate
    TR1 = 1; // Start timer 1
    TI = 1; // Set transmit interrupt flag

    // Send "Hello World!" via UART
    printf("Hello World!\n");

    // Toggle P1 for testing
    while (1)
    {
        P1 = ~P1; // Toggle P1
    }
}