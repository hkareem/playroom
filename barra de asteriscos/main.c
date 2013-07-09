#include  <16f887.h>
#fuses INTRC_IO
#use delay (clock=8000000)
int8 valorAnalogo = 0;
int8 vol;

void main ()

{  
   
   
   set_tris_a(0);//configurado como salida
   set_tris_e(1); //configurado como entrada
   SETUP_ADC_PORTS(sAN5); // este pin es analogo
   SET_ADC_CHANNEL(5); // el canal que usaremos y de cual obtendremos la señal es el 5
   setup_adc(ADC_CLOCK_DIV_32);
   lcd_init();
  
   while(1)
 
   
   {
     valorAnalogo = read_adc(); // asignanado una variable
     vol= valorAnalogo%16;
     lcd_putc("*");
     delay_ms(500);
     lcd_putc("\f");
     
     
   }
  
}
