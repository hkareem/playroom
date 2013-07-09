#include <16f887.h>
#fuses INTRC_IO
#use delay (clock=8000000)
#use rs232(baud=9600, parity=N, xmit=PIN_C6, rcv=PIN_C7, bits=8)// esto nos servira para decidir la velocidad de la transmision de los datos.
// parity=N esto es paridad sirve para detectara fallas

void main (void)
   {
    int8 c;
       while(1)
       
         { 
           if(kbhit())
            {
                   c=getc();
                   printf("\nEL caracter es: %u",c);
                 
            }
          
         }
   
   }
