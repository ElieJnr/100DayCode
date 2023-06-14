#include <stdio.h>

int decomposition(int n) {
    int nombre1=n;
    int nombre=n;
    int i=0;
    int expo=1;
    while (nombre >= 10) {
        nombre /= 10;
        i++;
        expo=expo*10;
    }
    printf("Chiffre le plus a gauche est: %d\n" , nombre1/expo);
    printf("le reste est : %d" ,nombre1%expo);
    printf("\n");
    printf("\n");
}

void main()
{
    decomposition(1909805);
}
