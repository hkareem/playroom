#include <16f887.h>
#fuses INTRC_IO
#use delay (clock=8000000)
#byte puertoA = 0x05
void main (void)
{
   set_tris_a(0x00);
   puertoA = 1;
   
   
   while(1)
   {
    while(puertoA != 128)
    {
       puertoA = puertoA * 2;
       delay_ms(200);
    }
      while(puertoA != 1)
      
      {
         puertoA = puertoA /2;
         delay_ms(200);
      }
   }

}

