#include <stdio.h>

void main()
{
    int t[]={1, 0, 23,1,0, 5,0,6,0,2,0};
    size_t taille=sizeof(t)/sizeof(t[0]);
    int *ptr = t;
    for (size_t i = 0; i < taille; i++)
    {
        printf("%d\n",*(ptr + i));
    }
}