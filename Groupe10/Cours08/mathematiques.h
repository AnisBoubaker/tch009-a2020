//
// Created by Anis Boubaker on 2020-10-29.
//

#ifndef MATHEMATIQUES__H //if not defined
#define MATHEMATIQUES__H

/*
 * Dépendances du module
 */
#include <stdio.h>



/*
 * CONSTANTES DE COMPILATIONS
 */
//Valeur maximale atteinte lors de l'affichage des tables de multiplication
#define TABLE_MAXIMUM 100 //Valeur maximale atteinte lors de l'affichage des tables de multiplication


/*
 *     DECLARATIONS DE PROTOTYPES
 */


/*
 * APPROX_PI
 * Approxime la valeur de pi
 * ENTREE:
 * - nb_termes (entier): permet de définir la précision du calcul
 * SORTIE (réel): Valeur approximative de pi.
 */
double approx_pi(int nb_termes);


/*
 * afficher_table_mult
 *
 * Affiche la table de multiplication pour toutes les valeurs jusqu'à max.
 * Exemple avec un max = 10
 *
 * 1 2 3 4 5 ... 10
 * 2 4 6 8 ....  20
 * ...
 * 5 10 15 20 ... 50
 * ...
 * 9 18 27 ..... 90
 * 10 20 30 .... 100
 *
 * ENTREES:
 * - max (entier) : jusqu'où aller dans la table?
 * SORTIE: Aucune (affichage seulement)
 *
 */
void afficher_table_mult(int max);


#endif