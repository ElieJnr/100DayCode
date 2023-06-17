#include <stdio.h>

void main()
{
    float a,b,c,delta;
    printf("a=  ");
    scanf("%f", &a);
    printf("b=  ");
    scanf("%f", &b);
    printf("c=  ");
    scanf("%f", &c);
    delta=(b*b)-4*a*c;
    if (delta < 0){
        printf("Cette equation n'admet pas de solution dans R");
    }else if (delta == 0){
        float x0=(-b)/(2*a);
        printf("La solution est : x0= %f\n",x0);
    }else if (delta > 0){
        float x1=(-b-sqrt(delta))/(2*a);
        float x2=(-b + sqrt(delta))/(2*a);
        printf("les solutions de cette equation sont: x1=%f  et x2= %f", x1,x2);
    }
}
