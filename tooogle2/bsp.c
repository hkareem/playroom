#ifndef __BSP__
#define __BSP__

    #fuses INTRC_IO
    #BYTE puertoA = 0x05
    #include <lcd.c>
    #use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8)

       
    void bsp_init(void)
    {
      set_tris_c(0xff);
      set_tris_e(0xff);
      set_tris_a(0x00);
      output_a(0);
      set_tris_a(0);//configurado como salida
      set_tris_e(1); //configurado como entrada
      SETUP_ADC_PORTS(sAN5); // este pin es analogo
      SET_ADC_CHANNEL(5); // el canal que usaremos y de cual obtendremos la se�al es el 5
      setup_adc(ADC_CLOCK_DIV_32);
      lcd_init();
   
    }
    
    int8 bsp_lee_sw(void)
    {  
       int8 var;
       var = input(PIN_C0);
       var = var + (input(PIN_C1)*2);
       var = var + (input(PIN_C2)*4);
       var = var + (input(PIN_C3)*8);
       var = var + (input(PIN_C4)*16);
       var = var + (input(PIN_C5)*32);
       var = var + (input(PIN_E1)*64);
       var = var + (input(PIN_E2)*128);
       return var;
    }

           int8 bsp_lee_microsw(int8 sw)
           {
              int8 val;
              val = bsp_lee_sw();
              return (val & (1<<sw) !=0);
           }
           
void bsp_led_on(int8 led)
{
  puertoA = puertoA | (1<<led);
}

void bsp_led_off(int8 led)
{
  puertoA = puertoA & (~(1<<led));
}

          
void  bsp_leds(int8 val)
{
  output_a(val);
}

void bsp_led_inv(int8 led)
{
  puertoA = puertoA ^ (1<<led);
}


int8 bsp_lee_pot(void)
{
  return read_adc();
}
#endif

