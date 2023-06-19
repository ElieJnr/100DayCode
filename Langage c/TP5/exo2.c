#include <stdio.h>

void afficheNotes(int tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", tab[i]);
    }
    
}

int moyenneNotes (int tab[],int n)
{
    int moyenne;
    int sum = 0;
    int t=0;
    for (int i = 0; i < n; i++)
    {
        sum+=tab[i];
        t++;
    }moyenne=sum/t;

    return moyenne;    
}
int maxNotes(int tab[],int n)
{
    int max=tab[1];
    for (int i = 0; i < n; i++)
    {
        if (max<=tab[i])
        {
            max=tab[i];
        }else if(max>tab[i])
        {
            continue;
        }else{
            return -1;
        }
    }
    return max;   
}
int chercheNotes (int tab[],int n,int note)
{
    int c=0;
    for (int i = 0; i < n; i++)
    {
        if (tab[i]==note)
        {
            printf("index numero %d\n",c++,i);
            continue;
            
        }else if (tab[i]!=note){
            continue;
        }else
        {
            printf("-1");
        }
    }  
}

void main()
{
    int tabNotes[]={12,13,14,15,16,10,12,20,6,12};
    afficheNotes(tabNotes,10);
    printf("la moyenne est: %d\n",moyenneNotes(tabNotes,10));
    printf("la plus grande note est: %d\n", maxNotes(tabNotes,10));
    chercheNotes(tabNotes,10,12);
}