#include <stdio.h>
void f1()
{
    printf("bonjour\n");
}

void f2(int n)
{
    for (int i = 1; i <=n; i++)
    {
        printf("bonjour\n");
    }
    
}
int f3(int n)
{
    f2(n);
    return 0;
}
void main()
{
    f1();
    f2(5);
    f3(5);
}