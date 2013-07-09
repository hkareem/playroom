#include <16f887.h>
#fuses INTRC_IO
#use delay(clock=8000000)
#include <lcd.c>
#use rs232(baud=9600, parity=N, xmit=PIN_C6, rcv=PIN_C7, bits=8)

int i;
int valor;
int8 lee_microsw(void);
int leds;
int numeros;
int num2;
int num3;
int8 c;
 
if(kbhit())
            {
                   c=getc();
                   c= num3
                   printf("\nEL caracter es: %u",num3);
                 
            }   
            

void main(void)
   {  
      int8 valorAnalogo = 0;
   
      lcd_init();
      SETUP_ADC_PORTS(sAN5); // este pin es analogo
      SET_ADC_CHANNEL(5); // el canal que usaremos y de cual obtendremos la señal es el 5
      setup_adc(ADC_CLOCK_DIV_32);
      printf("quieres multiplicar es 1, dividir es 2, restar es 3 o sumar es 4\n");
      
      while (1)
         {   
             lcd_putc("\f");  
             numeros = lee_microsw();
             printf(lcd_putc,"%u",numeros);
             delay_ms(1000);
             valorAnalogo = read_adc();
             valoranalogo = num2
             
             
        
         if(num==1)
         {
            printf("multiplicar:\n" );
            printf("ingrese un numero\n");
            printf(lcd_putc,"%u",numeros);
            delay_ms(1000);
            printf("ingrese otro numero\n");
            printf(lcd_putc,"%u",num2);
            resultado = numeros * num2;
            printf("%d",resultado);
            
        
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
  
   
