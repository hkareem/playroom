#include <stdio.h>

int main (void)
{   
    int i;
    char str[] = "hola mundo";
    
    for(i=0;i<10;i++)
    {
       printf("%c\n", str[i]);    
    }
    printf("\n");
    
    system ("PAUSE");
}
