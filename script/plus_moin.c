#include<stdio.h>
#include<stdlib.h>


void plus_moins(int valeur,int choix,char choix_choisi){

    if(choix>valeur)
        printf("le nombre est le plus petit.");
    else if(choix<valeur)
        printf("le nombre est le plus grand.");
    else
        printf("Bingo!\n");
}

void main(){

    int valeur;
    int choix;
    char choix_choisi;
    int count=0;
    valeur=rand() % 100 + 0;

    printf("le mode de difficulte est : ");
    printf("\nFacil[F] : essaie illimites\n");
    printf("Moyen[M] : 25 essaie\n");
    printf("Difficile[D] : 10 essaie\n");

    printf("votre choix est : \n");
    scanf("%s", &choix_choisi);

    if(choix_choisi=='F')
    {
        do
        {
            printf("Entrez une valeur : ");
            scanf("%d", &choix);
            plus_moins(valeur,choix,choix_choisi);
        } while (valeur!=choix);
    }
    else if(choix_choisi=='M')
    {

        do
        {
            printf("Entrez une valeur : ");
            scanf("%d", &choix);
            plus_moins(valeur,choix,choix_choisi);
            count=count+1;
        } while (count<25);
    }
    else if(choix_choisi=='D')
    {
        
        do
        {
            printf("Entrez une valeur : ");
            scanf("%d", &choix);
            plus_moins(valeur,choix,choix_choisi);
            count=count+1;
        } while (count<10);
    }
}
