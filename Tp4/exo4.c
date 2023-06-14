float resolveEquDeg1(float a, float b)
{   float X=0;
    if (a==0) 
    {
        return X;
    }else 
    {
        X=(-b)/a;
        return X;
    }
    return X;
}

float delta(float a, float b, float c)
{
    float delta=(b*b)-4*a*c;
    return delta;
}

float resolveEquDeg2(float a,float b,float c)
{   if (a==0)
    {
        
        
    }else
    {
        if (delta(a,b,c) < 0){
           printf("Cette equation n'admet pas de solution dans R");
        }else if (delta(a,b,c)== 0){
           float x0=(-b)/(2*a);
            printf("La solution est : x0= %f\n",x0);
        }else if (delta (a,b,c)> 0){
            float x1=(-b-sqrt(delta(a,b,c)))/(2*a);
            float x2=(-b + sqrt(delta(a,b,c)))/(2*a);
            printf("les solutions de cette equation sont: x1=%f  et x2= %f", x1,x2);
        }
    }
}

void main()
{
    printf("X= %f\n", resolveEquDeg1(10,5));
    printf("delta= %f\n",(delta(4,6,2)));
}