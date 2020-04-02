#include <Led blink 18f2431.h>

void main()
{
   set_tris_b(0x00);       //Set all portB pins to be output
   output_bit(PIN_B0,0);   //Initialy turn the LED off
   //Example blinking LED program
   while(true)
   {
      output_bit(PIN_B0,1);   //Turn LED on
      delay_ms(1000);          //Blinking period of 500ms =0.5s
      output_bit(PIN_B0,0);   //Turn LED off
      delay_ms(1000);
   }

}
