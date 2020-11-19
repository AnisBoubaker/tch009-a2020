//
// Created by Anis Boubaker on 2020-11-19.
//

#include "util_tableaux.h"


/**
 *
 * Écrire une fonction qui reçoit un tableau (int)
 * et qui retourne le maximum et l'indice du maximum.
 *
 * Si le tableau est vide, la fonction ne fait pas de traitement
 * et spécifie un indice == -1
 *
 */
void max_tab1d(int tab[], int nb_elts, int* max, int* indice)
{
    if(nb_elts<=0)
    {
        *indice = -1;
        return;
    }

    *max = tab[0];
    *indice = 0;
    for(int i=1; i<nb_elts; i++)
    {
        if(tab[i] > *max)
        {
            *max = tab[i];
            *indice = i;
        }
    }
}


void afficher_tab2d(int tab2d[][NB_COLONNES],
                    int nb_cols,
                    int nb_lignes)
{
    for(int ligne=0; ligne<nb_lignes; ligne++)
    {
        for(int colonne=0; colonne<nb_cols; colonne++)
        {
            printf("%d\t", tab2d[ligne][colonne]);
        }
        printf("\n");
    }
}

double moy_tab2d(int tab2d[][NB_COLONNES],
                 int nb_lignes,
                 int nb_cols)
{
    double moyenne=0;
    if(nb_lignes==0 || nb_cols==0)
    {
        return ERREUR_MOYENNE;
    }
    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_cols; j++)
        {
            moyenne+=tab2d[i][j];
        }
    }
    moyenne /= nb_lignes*nb_cols;
    return moyenne;
}

/*
 * Trouver la première occurence de
 * la valeur maximale du tableau à 2D
 * ainsi que sa position dans le tableau.
 * retourne la valeur maximale
 * stocke la position de la valeur maximale aux références
 * (adresses) pos_ligne et pos_colonne
 */
int max_tab2d(int tab[][NB_COLONNES],
          int nb_lignes,
          int nb_cols,
          int *pos_ligne,
          int *pos_colonne)
{
    int max;
    max = tab[0][0];
    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_cols; j++)
        {
            if(tab[i][j]>max)
            {
                max = tab[i][j];
                *pos_ligne = i;
                *pos_colonne = j;
            }
        }
    }
    return max;
}