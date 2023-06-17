#include <stdio.h>
void calcul(float x, float y, char z)
{
    if (z=='+'){
        printf("x+y= %f", x+y);
    }else if (z =='*')
    {
        printf("x*y=%f", x*y);
    }else if (z=='-')
    {
        printf("x-y=%f",x-y );
    }else if (z=='/')
    {
        if (y!=0)
        {
            printf("x/y= %f", x/y);
        }
    }
}

void main(){
    calcul(5 , 6 ,'/');
}