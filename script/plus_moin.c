#include<stdio.h>
#include<stdlib.h>


void plus_moins(int valeur,int choix){

    if(choix>valeur)
        printf("le nombre est le plus petit.");
    else if(choix<valeur)
        printf("le nombre est le plus grand.");
    else
        printf("Bingo!/n");
}

void main(){

    int valeur=10;
    int choix;
    valeur=rand() % 100 + 0;

    do{
        printf("Entrez une valeur : ");
        scanf("%d", &choix);
        plus_moins(valeur,choix);
    }while(valeur!=choix);
    
}
