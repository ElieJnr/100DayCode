#include <stdio.h>
#include "fonctions.h"

void returnMenu()
{
    char choix;

    do
    {
        printf("Voulez-vous retourner au menu principal? (y/n): ");
        scanf(" %c", &choix);

        if (choix == 'y')
        {
            int numero;
            printf("Veuillez Saisir votre numero de telephone: ");
            scanf("%d",&numero);
            for(int i=0 ;i <5;i++)
            {
                if (tabnumeros[i]==numero)
                {
                    int indice=trouve(tabnumeros,numero);
                    int saisi_du_menu= Menu();
                    if (saisi_du_menu==1)
                    {
                        printf("%d\n", affichersoldes(indice));
                    }else if (saisi_du_menu==2)
                    {
                        transfert_d_argent(tabsoldes, tabnumeros, tabcodes, indice);
                    }
                    break;
                }else
                {
                    printf("Numero incorrect\n");
                }
                
            }
        }

    } while (choix == 'y');
}
void main()
{
    int numero;
    printf("Veuillez Saisir votre numero de telephone: ");
    scanf("%d",&numero);
    for (int k = 0; k < 5; k++)
    {
        if (tabnumeros[k]==numero)
        {
            int indice=trouve(tabnumeros,numero);
            int saisi_du_menu= Menu();
            if (saisi_du_menu == 1)
                {
                    printf("%d\n", affichersoldes(indice));
                    returnMenu();
                }
            else if (saisi_du_menu == 2)
                {
                    transfert_d_argent(tabsoldes, tabnumeros, tabcodes, indice);
                    returnMenu();
                }
            break;
        
        }
        else
        {
            printf("Numero incorrect\n");
        }
        
    }  
        
}
