#include <stdio.h>

void inc (int *y, int *z);

int main (void)
{   
    int i, x=0, e=0;
    
    for(i=0;i<10;i++)
    {
         inc(&x, &e);
         printf("x vale: %d y e vale:%d\n", x, e);
    }
   
    
   
    system("PAUSE");
}

void inc(int *y, int *z) 
{
     (*y)++;
     (*z)++;
}
