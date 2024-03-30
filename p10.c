#include <reg51.h>

void delay(void);

void main()
{
    for (;;)
    {
        P1 = 0x00;
        delay();
        P1 = 0xFF;
        delay();
    }
}

void delay(void)
{
    TMOD = 0x01;   // Timer in Mode 1, 16-bit
    TL0 = 0x18;    // Timer lower byte
    TH0 = 0xFC;    // Timer Higher byte
    TR0 = 1;       // Run Timer

    while (TF0 == 1)
    {
        TR0 = 0;   // Stop Timer
        TF0 = 0;   // Clear Timer Overflow Flag
        TR0 = 1;   // Restart Timer
    }
    TR0 = 0;   // Stop Timer after the delay
}