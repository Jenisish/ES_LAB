#include <reg51.h>

void Serialtx(unsigned char);
unsigned int i=0;

void Serialtx (unsigned char ch)
{
    SBUF = ch;         // loading value in buffer
    while (TI == 0);   // wait until transmission is over
    TI = 0;
}

void main(void)
{
    TMOD = 0x20;    // use Timer1, 8-bit auto-reload
    TH1 = 0xFD;     // 9600 Baud rate
    SCON = 0x50;    // mode1, receiver enable
    TR1 = 1;        // start timer

    for (i; i<5; i++)
    {
        Serialtx('Y');
        Serialtx('E');
        Serialtx('S');
    }

    while(1);
}

// Write an 8051 'C' program to transfer "YES" serially
// at 9600 baud rate, 8-bit data, 1 stop bit, repeat
// for 5 times.

// The o/p will be ASCII equivalent "YES" - _