//
// Created by delcr on 06/10/2021.
//

#include "exercice.h"
#include <stdio.h>
#include "structure.h"
#define MA_VALEUR_MAX 100
#define NB_MAX_LIGNES 3
#define NB_MAX_COLONNES 4

//EXERCICE 1

void exercice1 (){
    NombreRationnel nR1 , nR2, nRProduit , nRSomme ;
    nR1 = saisirValeur() ;
    nR2 = saisirValeur() ;
    printf(" afficher les deux rationnels :\n  ");
    afficher(nR1) ;
    afficher(nR2);
    nRProduit = multiplieRationnels(nR1, nR2);
    nRSomme = additionRationnels(nR1 , nR2) ;
    printf( "\n la multiplication des deux rationnels choisit est : \n") ;
    afficher(nRProduit) ;
    printf("l'addtions des deux nombres rationnels choisit est : \n" ) ;
    afficher(nRSomme) ;
}

//EXERCICE 2
void exercice2 () {
    int monTableau [MA_VALEUR_MAX];
    int nbreDansLeTableau= 0 , i = 0 , plusGrand = 0 ;
    printf("\nsaisissez le nombre d'entier que vous voulez rentrer dans le tableau");
    scanf("%d", &nbreDansLeTableau) ;
    if (nbreDansLeTableau > MA_VALEUR_MAX){
        printf ("\nsaisir un nombre inferieur a 100");
        scanf(" %d", &nbreDansLeTableau);
    }
    for (i = 0 ; i < nbreDansLeTableau ; i++){
        printf ("\nsaisissez la valeur que vous voulez inserer dans le tableau");
        scanf("%d", &monTableau[i] );
    }
    plusGrand= monTableau[0] ;
    for (int j = 0 ; j < nbreDansLeTableau - 1 ; j++){
        if (monTableau [j+1] > plusGrand){
            plusGrand = monTableau[j+1];
        }
    }
    printf ("\nle plus grand entier du tableau est %d", plusGrand) ;
}

//EXERCICE 3
void exercice3 (){
    int tableau2D [NB_MAX_LIGNES][NB_MAX_COLONNES] = {{0}} ;
    int tableau1D [NB_MAX_COLONNES * NB_MAX_LIGNES] ;
    int i = 0, j = 0 ;
    for (i = 0 ; i < NB_MAX_LIGNES ; i++){
        for (j = 0 ; j < NB_MAX_COLONNES ; j++){
            printf("\nsaisisez la valeur pour la ligne %d et pour la colonne  %d \n", i+1, j+1);
            scanf (" %d ", &tableau2D[i][j]);
        }
        printf("\n");
    }
    for (i = 0 ; i < NB_MAX_LIGNES ; i++){
        for (j = 0 ; j < NB_MAX_COLONNES ; j++){
            tableau1D [i*3+j] = tableau2D [i][j] ;
        }
    }
    afficheTableau2D(tableau2D);
    printf("______\n") ;
    afficheTableau1D(tableau1D, NB_MAX_COLONNES * NB_MAX_LIGNES);
}
