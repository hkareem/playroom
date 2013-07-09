#include <stdio.h>

void foo (void);
void foo1 (int a);
int foo2 (void);

int main(void)
{   
    int b;
    foo();
    foo1(b);
    b = foo2();
    foo1(b);
    system("PAUSE");
}

void foo (void)
{
     printf("hola mundo\n");
}

void foo1 (int a)
{
     printf("el parametro es:%d\n",a);
}

int foo2 (void)
{
    return 10;
}
