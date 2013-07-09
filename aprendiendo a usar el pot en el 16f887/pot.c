#include  <16f887.h>
#fuses INTRC_IO
#use delay (clock=8000000)
#byte puertoA = 0x05

void main ()

{  
   int8 valorAnalogo = 0;
   
   set_tris_a(0);//configurado como salida
   set_tris_e(1); //configurado como entrada
   SETUP_ADC_PORTS(sAN5); // este pin es analogo
   SET_ADC_CHANNEL(5); // el canal que usaremos y de cual obtendremos la se�al es el 5
   setup_adc(ADC_CLOCK_DIV_32);
   
  
   while(1)
 
   
   {
     valorAnalogo = read_adc(); // asignanado una variable
     if ((valorAnalogo >= 100) && (valorAnalogo <=150)) // esta operacion es una and logica
     {
        if(valorAnalogo <=150)
        {
          output_a(0xff);
        }
     
     }
      else
      {
       output_a(0x00);
      }
     output_a(valorAnalogo);
     delay_ms(100);
    }
  
}

