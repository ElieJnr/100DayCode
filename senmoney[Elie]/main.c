#include <stdio.h>
#include "fonctions.h"


void main()
{
    int numero;
    char choix;
    do
        {
        do
        {
            printf("Veuillez saisir votre numero: ");
            scanf("%d",&numero);
        } while (numero != tabnumeros[0]  && numero != tabnumeros[1]  && numero != tabnumeros[2]  && numero != tabnumeros[3]  && numero != tabnumeros[4]);
        int indice=trouve(tabnumeros,numero);
        int saisiChoixMenu=Menu();
        if (saisiChoixMenu==1)
        {
            printf("Votre solde est de : %d\n",affichersoldes(indice));
        }else if (saisiChoixMenu==2)
        {
            transfert_d_argent(tabsoldes,tabnumeros,tabcodes,indice);
        }
        
        
        printf("Voulez vous retournez au menu principale: (y/n) \n");
        scanf("%s",&choix);

    } while (choix== 'y');
    

}
