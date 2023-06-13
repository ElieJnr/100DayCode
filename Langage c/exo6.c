#include <stdio.h>

int main(){
    int n;
    float Moyenne;
    float sum;
    int i;
    i=0;
    sum=0;
    do{
        printf("Entrer un nombre entier: ");
        scanf("%d",&n);
            sum+=n;
            i++;
    }while(n > 0);

    i--;
    if (i>0){
        Moyenne = (sum+(-n))/i;
    }printf("La moyenne des %d entiers saisies est de  %f", i,Moyenne);
    
}