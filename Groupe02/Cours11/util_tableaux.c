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
    *max;
    *indice;

    if(nb_elts<=0)
    {
        *indice = 0;
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