#include <stdio.h>

int tabnumeros[5] = { 771000000, 778000000, 779000000, 774000000, 775000000 };
int tabsoldes[5] = { 10000, 20000, 30000, 40000, 50000 };
int tabcodes[5] = { 1234, 1234, 1234, 1234, 0000 };

int trouve(int tab[], int val)
{
    for (int i = 0; i <5; i++)
    {
        if (tab[i] == val && i <= 5)
        {
            return i;
        }
        else if (tab[i] != val)
        {
            continue;
        }
    }
    return -1;
    
}

int Menu()
{
    int n;
    printf("### Menu  Sen Money ###\n");
    printf("Saisir le numero du service a utiliser: \n");
    printf("1.Solde de votre compte\n2.Transfert d'argent\n3.Paiement de facture\n4.Options\n");
    printf("Votre choix: ");
    scanf("%d",&n);
    return n;
}

int affichersoldes(int indice)
{   
   return tabsoldes[indice];
}

void transfert_d_argent(int tab[], int tab2[],int tab3[], int indice) {
    int montant;
    int frais;
    
    printf("---Bienvenue dans le menu de transfert d'argent----\n");
    printf("Veuillez saisir le Montant du transfert: ");
    scanf("%d", &montant);
    
    frais = montant / 100;
    printf("Vous voulez envoyer : %d, les frais seront de : %d\n", montant, frais);
    
    int montant_a_transferer = montant + frais;
    
    if (montant_a_transferer > tab[indice]) {
        printf("Soldes insuffisants !!!\n");
    } else if (montant_a_transferer <= tab[indice]) {
        int numero_destinataire;
        printf("Veuillez saisir le numéro du destinataire : ");
        scanf("%d", &numero_destinataire);
        
        int present = 0; 
        int codesecret;
        
        for (int j = 0; j < 5; j++) {
            if (tab2[j] == numero_destinataire) {
                present = 1;
                printf("Veuillez entrer votre code secret: ");
                scanf("%d",&codesecret);
                for (int l = 0; l < 5; l++)
                {
                    if (tab3[l]==codesecret)
                    {
                        printf("Transfert reussi\n");
                        tabsoldes[trouve(tabnumeros,numero_destinataire)]=tabsoldes[trouve(tabnumeros,numero_destinataire)]+montant;
                        tabsoldes[indice]=tabsoldes[indice]-montant_a_transferer;
                        break;
                    }else{
                        printf("Erreur code incorrect");
                    }
                    
                }
                
                break;
            }
        }
        
        if (!present) {
            printf("Le numéro de destinataire n'est pas valide.\n");
        }
    }
}