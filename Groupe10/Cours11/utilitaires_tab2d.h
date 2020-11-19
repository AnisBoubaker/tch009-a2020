//
// Created by Anis Boubaker on 2020-11-19.
//

#ifndef COURS11_UTILITAIRES_TAB2D_H
#define COURS11_UTILITAIRES_TAB2D_H

//Dépendances du module
#include <stdio.h>

//Constantes du modules
#define MAX_LIGNES 4
#define MAX_COLONNES 100


double moyenne_tab2d(int tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes);

void afficher_tab2d(int tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes);


#endif //COURS11_UTILITAIRES_TAB2D_H
