//
// Created by Anis Boubaker on 2020-10-29.
//


#ifndef MATHEMATIQUES__H
#define MATHEMATIQUES__H



#include <stdio.h>

//Constantes du module
#define MAXIMUM 100


/*
 * APPROX_PI
 * Effectue une approximation de la valeur de pi comme la somme d'une série
 * ENTREES:
 * nb_termes (entier): Le nombre de termes de la série à utiliser pour le calcul
 * SORTIE (réel): L'approximation de la valeur de pi résultante.
 */
double approx_pi(int nb_termes);


/*
 * table_multiplication
 * Fonction qui affiche la table de multiplication jusqu'à n
 *
 * Exemple si n= 10
 *
 * 1 2 3 4 .... 10
 * 2 4 6 8 .... 20
 * ....
 * 9 18 27 ...  90
 * 10 20 30 ... 100
 *
 * 5 10 15 20 25 ... 50
 *
 * ENTREE:
 * n : Valeur maximale jusqu'à laquelle on se rend en ligne et en colonnes
 * SORTIE: Aucune
 */
void table_multiplication(int max);

#endif