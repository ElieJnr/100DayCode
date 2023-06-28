#include <stdio.h>
#include "fonctions.h"


void main()
{
    int numero;
    printf("Veuillez entrer votre numero: ");
    scanf("%d",&numero);
    while (numero!=tabnumeros[0] && numero!=tabnumeros[1] && numero!=tabnumeros[2] && numero!=tabnumeros[3] && numero!=tabnumeros[4] )
    {
        printf("Numero non present dans la base de donne veuillez entrer un autre numero: ");
        scanf("%d",&numero);
    }
    int indice=trouve(tabnumeros,numero);
    int saisi_du_menu=Menu();
    if (saisi_du_menu==1)
    {
        printf("%d\n", affichersoldes(indice));
        returnMenu();
    }
    if (saisi_du_menu==2)
    {
        transfert_d_argent(tabsoldes, tabnumeros, tabcodes, indice);
        returnMenu();
    }
}
