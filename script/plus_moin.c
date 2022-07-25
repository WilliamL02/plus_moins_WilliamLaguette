#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void plus_moins(int val_trouver, int choix_joueur){

    if(choix_joueur>val_trouver)
        printf("le nombre est le plus petit.");
    else if(choix_joueur<val_trouver)
        printf("le nombre est le plus grand.");
    else
        printf("Bingo!\n");
}

void main(){
    srand(time(NULL));

    int val_trouver1, choix_joueur1, coups1, val_trouver2, choix_joueur2, coups2, tours;

    printf("veulliez mettre le nombre de tour : ");
    scanf("%d", &tours);
    int k=0;
    do {
        // code for player 1:
        int i=0;
        val_trouver1= rand() %100 + 1;
        
        printf("\n\nNombre genere %d ", val_trouver1);
        printf("\nJoueur 2, D'apres vous? Combien de tour est ce que le joueur 1 doit battre? : ");
        scanf("%d", &coups1);
        do
        {
            printf("\nEntrez un nombre entre 1 et 100! :");
            scanf("%d", &choix_joueur1);
            plus_moins(val_trouver1,choix_joueur1);
            i++;
            if (choix_joueur1==val_trouver1)
                break;
        } while (i<coups1);
        int points1=points1+(coups1-i+1);
        printf("\nJ1 Vous venez d'obtenir %d points", points1);
        
        // Code for player 2 :

        int j=0;
        val_trouver2= rand() %100 + 1;
        
        printf("\n\nNombre genere %d ", val_trouver2);
        printf("\nJoueur 1, D'apres vous? Combien de tour est ce que le joueur 2 doit battre? : ");
        scanf("%d", &coups2);
        do
        {
            printf("\nEntrez un nombre entre 1 et 100! :");
            scanf("%d", &choix_joueur2);
            plus_moins(val_trouver2, choix_joueur2);
            j++;
            if (choix_joueur2==val_trouver2)
                break;
        } while (j<coups2);
        int points2=points2+(coups2-j+1);
        printf("\nJ2 Vous venez d'obtenir %d points", points2);
        k++;

    }while(k<tours);
}
