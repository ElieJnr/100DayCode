#include <stdio.h>

void main()
{   
    int i;
    i=15;

    int *p= &i;

    *p=16;

    printf("%d",i);
}