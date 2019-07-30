#include <util/delay.h> //Adding delay Library
int main(void)
{
  DDRB |= (1<<5); // Defining 5th Pin of PORT B as output
  while(1) // A infinite loop unless returned 0
  {
    PORTB |=(1<<5); //Setting 5th Pin of PORT B to HIGH
    _delay_ms(1000); // Adding 1000ms second delay
    PORTB &= ~(1 << 5);   //Setting 5th Pin of PORT B to LOW
    _delay_ms(1000); // Adding 1000ms second delay
  }
}

