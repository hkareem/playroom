#include <16f887.h>
#fuses INTRC_IO
#use delay (clock=8000000)
#use rs232(baud=9600, parity=N, xmit=PIN_C6, rcv=PIN_C7, bits=8)// esto nos servira para decidir la velocidad de la transmision de los datos.
// parity=N esto es paridad sirve para detectara fallas

int i=0;
int valor;
int8 lee_microsw(void);
int leds;
void main (void)
   {
   
       set_tris_c(0xff);
       set_tris_e(0xff);
       
       while(1)
       
         { 
           leds = lee_microsw();
           output_a(leds);
           printf("%u\n",leds);    
           delay_ms(200);
           
          if(leds==valor)
            {
              valor=lee_microsw();
            }
           else
            {
              valor=lee_microsw();
              leds = lee_microsw();
              printf("%u\n",leds);    
              
            }
             delay_ms(200);
         }
   
   }
   
    int8 lee_microsw(void)
   {
      int8 entrada [8];
      int valor;
    
      
      entrada[0] = input(PIN_C0);
      entrada[1] = input(PIN_C1);
      entrada[2] = input(PIN_C2);
      entrada[3] = input(PIN_C3);
      entrada[4] = input(PIN_C4);
      entrada[5] = input(PIN_C5);
      entrada[6] = input(PIN_E1);
      entrada[7] = input(PIN_E2);
      
      valor = 0;
       for(i=0;i<8;i++)
       {
        
         valor+= (entrada[i] << i);
       
       }
     
      return valor;
      
     
     
    
   }
