#include <stdio.h>

int Menu()
{
    int n;
    printf("### Menu Send Money ###\n");
    printf("Saisir le numéro du service à utiliser\n");
    scanf("%d", &n);
    printf("1. Solde de votre compte\n");
    printf("2. Transfert d'argent\n");
    printf("3. Paiement de facture\n");
    printf("Options\n");
    printf("Votre choix: %d\n", n);
    return n;
}

int SoldeCompte()
{
    return 10000;
}

void affichersolde()
{
    int choice = Menu();
    if (choice == 1)
    {
        printf("Le solde de votre compte est: %d\n", SoldeCompte());
    }
}
void Returnmenu()
{
    char c;
    printf("Voulez-vous retournez au menu? (y=Oui) : ");
    scanf("%s",&c);
    if(c='y')
    {
        affichersolde();
    }else{
        printf("Error!!!");
    }
}