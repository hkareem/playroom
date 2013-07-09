#include <stdio.h>

void suma(int y, int z, int *r);

int main (void)
{   
    int i=50, x=20, e=20;
    
    suma(i, x, &e);
    printf("%d\n",e);
    system("PAUSE");
}

void suma(int y, int z, int *r)
{
    *r = y+z;
}
