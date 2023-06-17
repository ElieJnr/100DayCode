#include<stdio.h>
void f2 (int n){
    for (int i=0 ; i<n ; i++ ){
        printf("bonjour\n");
    }
}
void main(){
    int n ;
    printf("saisir un nombre\n");
    scanf("%d", &n);
    f2(n);
}