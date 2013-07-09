#include <stdio.h>

int main (void)
{   
    int i;
    char str[] = "adios mundo";
    
    for(i=0;i<(sizeof(str)-1);i++)
    {
       printf("%c\n", str[i]);    
    }
    printf("\n");
    
    system ("PAUSE");
}
