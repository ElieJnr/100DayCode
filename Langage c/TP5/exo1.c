#include<stdio.h>

void main()
{
    int tabNotes[10]={18,12,5,20,15,7,18,10,15,11};
    int sum=0;
    int notesMax=tabNotes[0];
    int t= sizeof(tabNotes)/sizeof(tabNotes[0]);
    for (int i =0; i < t; i++)
    {
        sum+=tabNotes[i];
        if(tabNotes[i]>notesMax)
        {
            notesMax=tabNotes[i];
        }else{
            continue;
        }
        
    }printf("la plus grande des notes est: %d\n",notesMax);
    int moyenne=sum/t;
    printf("la moyenne des %d termes saisi est : %d",t,moyenne);
    
}