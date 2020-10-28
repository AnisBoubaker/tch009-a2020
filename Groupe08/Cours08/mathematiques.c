//
// Created by Anis Boubaker on 2020-10-26.
//

#include "mathematiques.h"

double pow_entier(double n, int puiss)
{
    double resultat = 1;
    int i=0; //compteur
    int puiss_pos;

    puiss_pos = abs(puiss);
    for(i=0; i < puiss_pos; i++)
    {
        resultat *= n;
    }


    if(puiss < 0)
    {
        resultat = 1 / resultat;
    }
    afficher_table_multiplication(34);

    return resultat;
}

/*
 * Une fonction qui affiche la table de multiplication
 * 1    2   3   4   5   ... 10
 * 2    4   6
 * ..
 * 10   20  30  ....        100
 */

void afficher_table_multiplication(int max)
{
    int i, j;

    for (j = 1; j<= max; j++)  //j = 3
    {
        for (i = 1; i <= max;  ++i )  //i =  ... max+1
        {
            printf("%5d", j * i);
        }
        printf("\n");
    }
    printf("i vaut: %d, j vaut: %d", i, j);

    // 5    10  15  20 ...  50  ... 5*max


}