#include <12f510.h>

#use delay (clock=8000000)
#BYTE B = 0x06

void main(void)
{
   set_tris_b(0x00);
   
   while(1)
   {
     output_b(0b000001);
     delay_ms(200);
   }
}
