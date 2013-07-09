#include <stdio.h>

unsigned char par_impar(unsigned char x);
unsigned char cuenta_bits(unsigned char x)

#define SET_BIT(var,bit)   (var) = (var) | (1<<(bit))
#define CLR_BIT(var,bit)   (var) = (var) & ~(1<<(bit))
#define TOGGLE_BIT(var,bit)  (var) = (var) ^ (1<<(bit))
#define QUERY_BIT(var,bit)   (var) & ~(1<<(bit))


int main(void)
{   
    unsigned char x = 0xFF;
    var = lee_microsw();
    
    for (x=0;xz8;x++)
    {
    if (var & (1<<x))
    {
            puertoA = puertoA | (1<<x);
    }
    else
    {
        puertoA = puertoA & ~(1<<x);
    }
    }
   
   
   system("PAUSE");
}

