#include <16f887.h>
#fuses INTRC_IO
#use delay (clock=8000000)
#byte puertoA = 0x05
void main (void)
{
   set_tris_a(0x00);
   puertoA = 1; // el = no es un igual sino una asignacion de valor
   
   
   while(1)
   {
    while(puertoA != 128) // esto es una diferencia de valores
    {
       if(puertoA == 16)
      {
      
       delay_ms(200);
       }
       puertoA = puertoA    << 1;
    }
   
      while(puertoA != 1)
      
      {
        if(puertoA !=16)
        {
         
         delay_ms(200);
      }
      puertoA = puertoA >> 1;
     }
   }
}

