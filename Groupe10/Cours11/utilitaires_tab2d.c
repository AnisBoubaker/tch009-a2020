//
// Created by Anis Boubaker on 2020-11-19.
//

#include "utilitaires_tab2d.h"

double moyenne_tab2d(int tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes)
{
    double moyenne = 0;
    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            moyenne+=tab[i][j];
        }
    }
    moyenne /= nb_colonnes*nb_lignes;
    return moyenne;
}

void afficher_tab2d(int tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes)
{
    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            printf("%d\t", tab[i][j]);
        }
        printf("\n");
    }
}
