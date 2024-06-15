#include "mbed.h"
#include "arm_book_lib.h"

int main()
{
    DigitalIn button(USER_BUTTON); // esta onectado fisicamete a una R_PullUp

    DigitalOut led(LED1);

    while (true) 
    {
        if (button.read() == 0)
        {
            led = ON;
        }
        else
        {
            led = OFF;
        }
        
    }
}