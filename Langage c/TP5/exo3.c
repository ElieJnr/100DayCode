#include <stdio.h>

int Menu()
{
    int n;
    printf("### Menu Send Money ###\n");

    printf("1. Solde de votre compte\n");
    printf("2. Transfert d'argent\n");
    printf("3. Paiement de facture\n");
    printf("Saisir le numéro du service à utiliser\n");
    scanf("%d", &n);
    return n;
}

int trouve(int tab[],int val)
{
    int t=5;
    for (int i = 0; i <t ; i++)
    {
        if (tab[i]==val)
        {
            return i;
        }
    }return -1;
    
}

void main ()
{   
    int nbr =Menu();
    int numero;
    int mdp;
    printf("Veuillez entrer votre numero de telephone: ");
    scanf("%d",&numero);

    printf("Veuillez saisir Votre mot de passe: ");
    scanf("%d",&mdp);

    int tabNumeros[5]={777508113 , 773128060, 778520001, 775842000, 779996633};
    int tabSoldes[5]={10000, 0, 55200, 400, 70};
    int tabCodes[5]={1234, 0000, 1969, 1960, 2023};
    trouve(tabNumeros,numero);
    int indice=(trouve(tabNumeros,numero));
    if (nbr == 1 && trouve != -1 && mdp ==tabCodes[indice])
    {
        printf("Votre solde est de ; %d\n",tabSoldes[indice],"Fcfa");
    }else{
        printf("Erreur informations entres incorrectes\n\n\n ");
    }
}