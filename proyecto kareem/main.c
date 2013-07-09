#include <16f887.h>
#fuses INTRC_IO
#USE delay(clock=8000000)
void main(void)
{
   set_tris_a(0x00); 
   
   for(;;);
   {
   output_a(0b10101010);
   delay_ms(200);
   output_a(0b01010101);
   delay_ms(200);
   }
   

}
