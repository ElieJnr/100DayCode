#include<stdio.h>

void main()
{
    int tabNotes[10]={12,13,10,15,16,19,20,12,9,12};
    int sum=0;
    int notesMax=tabNotes[0];
    int t= sizeof(tabNotes)/sizeof(tabNotes[0]);
    for (int i =0; i < t; i++)
    {
        for (i =0; i < t; i++)
        {
            sum+=tabNotes[i];
        }int moyenne= sum/t;
        printf("%d",moyenne)
        
        if(tabNotes[i]>notesMax)
        {
            notesMax=tabNotes[i];
        }else{
            continue;
        }
        
    }printf("%d",notesMax);
}