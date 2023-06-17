#include <stdio.h>

int main() {
    srand(time(NULL));
    int nombreRand, tentative, i = 0;
    
     nombreRand= rand() % 1000 + 1;
     printf("%d\n",nombreRand);
    do {
        printf("Veuillez entrer un nombre : ");
        scanf("%d", &tentative);
        i++;
        
        if (tentative < nombreRand) {
            printf("Trop petit !\n");
        } else if (tentative > nombreRand) {
            printf("Trop grand !\n");
        } else {
            printf("trouvé en %d essai(s).\n",i);
        }
        
    } while (tentative != nombreRand && i < 10);
    
    if (i >= 10) {
        printf("nombre maximal d'essais depasse\n. Le nombre à deviner etait : %d\n", nombreRand);
    }
}