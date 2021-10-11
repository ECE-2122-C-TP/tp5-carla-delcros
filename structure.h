//
// Created by delcr on 06/10/2021.
//

#ifndef TD5_STRUCTURE_H
#define TD5_STRUCTURE_H
#define MA_VALEUR_MAX 100
#define NB_MAX_LIGNES 3
#define NB_MAX_COLONNES 4

typedef struct {
    int numerateur , denominateur ;
} NombreRationnel ;

NombreRationnel saisirValeur ();
void afficher (NombreRationnel nR) ;
NombreRationnel multiplieRationnels (NombreRationnel nR1 , NombreRationnel nR2) ;
NombreRationnel additionRationnels (NombreRationnel nR1 , NombreRationnel nR2) ;
void afficheTableau2D (int tableau[NB_MAX_LIGNES][NB_MAX_COLONNES]);
void afficheTableau1D (int tableau1D[], int taille );

#endif //TD5_STRUCTURE_H
