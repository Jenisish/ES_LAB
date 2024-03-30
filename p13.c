#include <reg51.h>

void delay(unsigned int); // Function prototype declaration

void main(void) // Corrected spelling of 'main'
{
    while (1)
    {
        P1 = 0x00;
        delay(500);
        
        P1 = 0x11; // Corrected spacing and added '0x' prefix
        delay(500);
        
        P1 = 0x22;
        delay(500);
        
        P1 = 0x33;
        delay(500);
        
        P1 = 0x44;
        delay(500);
        
        P1 = 0x55;
        delay(500);
        
        P1 = 0x66;
        delay(500);
        
        P1 = 0x77;
        delay(500);
        
        P1 = 0x88;
        delay(500);
        
        P1 = 0x99;
        delay(500);
        
        P1 = 0xAA;
        delay(500);
        
        P1 = 0xBB;
        delay(500);
        
        P1 = 0xCC;
        delay(500);
        
        P1 = 0xDD;
        delay(500);
        
        P1 = 0xEE;
        delay(500);
        
        P1 = 0xFF; // Changed ':' to '='
        delay(500);
    }
}

void delay(unsigned int time)
{
    unsigned int i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 1275; j++); // Adjusted delay loop for approximately 1 ms delay
}