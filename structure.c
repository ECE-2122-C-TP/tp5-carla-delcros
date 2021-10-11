//
// Created by delcr on 06/10/2021.
//
#include "exercice.h"
#include "structure.h"
#include <stdio.h>
#define NB_MAX_LIGNES 3
#define NB_MAX_COLONNES 4
#define MA_VALEUR_MAX 100


/* Fonction qui saisie des valeurs .
 * Paramètres :
 * - IN : rien
 * - OUT : nombre rationnel
 */

NombreRationnel saisirValeur () {
    NombreRationnel nR ;
    printf ("Saisissez un nombre \n") ;
    scanf ("%d %d" , &nR.numerateur, &nR.denominateur) ;
    return nR ;
}
/* Fonction qui affiche le rationnel .
 * Paramètres :
 * - IN : un rationnel
 * - OUT : rien
 */
void afficher (NombreRationnel nR) {
    printf ("\n %d / %d ", nR.numerateur, nR.denominateur);
}

/* Fonction qui multiplie deux rationnels.
 * Paramètres :
 * - IN : rationnel1 , rationnel2
 * - OUT : nombre rationnel
 */

NombreRationnel multiplieRationnels (NombreRationnel nR1 , NombreRationnel nR2) {
    NombreRationnel nR3 ;
    nR3.denominateur = nR2.denominateur * nR1.denominateur ;
    nR3.numerateur = nR2.numerateur * nR1.numerateur ;
    return (nR3);
}

/* Fonction qui additionne deux rationnels.
 * Paramètres :
 * - IN : rationnel1 , rationnel2
 * - OUT : nombre rationnel
 */
NombreRationnel additionRationnels (NombreRationnel nR1 , NombreRationnel nR2){
    NombreRationnel nR3 ;
    nR3.denominateur = nR1.denominateur * nR2.denominateur ;
    nR3.numerateur = (nR1.numerateur * nR2.denominateur) + (nR1.denominateur * nR2.numerateur) ;
    return nR3 ;
}
/* Fonction qui affiche un tableau 2D.
 * Paramètres :
 * - IN : un tableau 2D
 * - OUT : rien
 */

void afficheTableau2D (int tableau[NB_MAX_LIGNES][NB_MAX_COLONNES]){
    int i =0 , j = 0 ;
    for (i = 0 ; i < NB_MAX_LIGNES ; i++){
        for (j = 0 ; j < NB_MAX_COLONNES ; j++){
        printf ("%d\t", tableau[i][j]);
        }
        printf("\n");
    }
}
/* Fonction qui affiche un tableau 1D.
 * Paramètres :
 * - IN : un tableau
 * - OUT : rien
 */

void afficheTableau1D (int tableau1D[], int taille ){
    for (int k =0 ; k < taille ; k++) {
        printf("%d\t", tableau1D[k]);
    }
}