#include <stdio.h>

int suma_arr(int *arr, int size);

int main (void)
{   
    int i;
    int array[]= {1,2,3,4,5,6,7,10,10};
    i = suma(&array[0], sizeof(array)/sizeof(array[0]));
    printf("%d\n",i);
    
    system("PAUSE");
}

int suma_arr(int *arr, int size)
{
     int x,  sum = 0;
     for(x=0;x<size;x++)
     {
        sum = sum + *arr;
        arr++;                
     }
    
    return sum;
}
