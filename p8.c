#include <reg51.h>

sbit mybit = P2^4;

void main()
{
    while (1)
    {
        mybit = 1; // Turn ON P2.4
        // Add some delay here (e.g., using a delay function or a loop)
        mybit = 0; // Turn OFF P2.4
        // Add some delay here as well
    }
}