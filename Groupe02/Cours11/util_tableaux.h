//
// Created by Anis Boubaker on 2020-11-19.
//

#ifndef COURS11_UTIL_TABLEAUX_H
#define COURS11_UTIL_TABLEAUX_H

//Dépendance du module
#include <stdio.h>


//CONSTANTES DU MODULE
#define NB_LIGNES 5     //Nombre de ligne max des tab 2d
#define NB_COLONNES 10  //Nombre de colonnes max des tab 2d

#define ERREUR_MOYENNE -2000000000

/**
 *
 * Écrire une fonction qui reçoit un tableau (int)
 * et qui retourne le maximum et l'indice du maximum.
 *
 */
void max_tab1d(int tab[], int nb_elts, int* max, int* indice);

/*
 * Affiche dans la console un tableau à deux dimensions
 * ayant NB_COLONNES comme taille maximale sur les colonnes.
 */
void afficher_tab2d(int tab2d[][NB_COLONNES],
                    int nb_cols,
                    int nb_lignes);


/*
 * moy_tab2d
 * Calcule retourne la moyenne des éléments d'un tableau 2d d'entiers.
 */
double moy_tab2d(int tab2d[][NB_COLONNES], int nb_lignes, int nb_cols);

#endif //COURS11_UTIL_TABLEAUX_H
