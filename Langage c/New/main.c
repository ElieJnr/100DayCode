#include <stdio.h>


void main()
{
    char chaine[50]= "Je suis elie";
    for (size_t i = 0; i < 50; i++)
    {
        printf("%c\n",chaine[i].split(" "));
    }
    
    
}