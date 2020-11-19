//
// Created by Anis Boubaker on 2020-11-19.
//

#include "test_util_tableaux.h"

void test_max_tab1d(void)
{
    int tab[] = {23, 56, 12, 19, 0, -10, 100, 3, 2, 67};
    int le_max;
    int indice_max;

    max_tab1d(tab, 10, &le_max, &indice_max);
    assert( le_max==100 );
    assert( indice_max == 6 );

    max_tab1d(tab, 5, &le_max, &indice_max);
    assert( le_max==56 );
    assert( indice_max == 1 );

    max_tab1d(tab, 0, &le_max, &indice_max);
    assert( indice_max == -1 );
}

void test_moy_tab2d(void)
{
    int tab[NB_LIGNES][NB_COLONNES] = {
            {34, 6, 8, 10},
            {13, 10, 5, 2},
            {10, 12, 11, 5}
    };

    //La moyenne devrait être 10.5
    assert( moy_tab2d(tab, 3, 4) == 10.5 );

    assert( moy_tab2d(tab, 0, 0) == ERREUR_MOYENNE );
    assert( moy_tab2d(tab, 0, 3) == ERREUR_MOYENNE );
    assert( moy_tab2d(tab, 3, 0) == ERREUR_MOYENNE );

}