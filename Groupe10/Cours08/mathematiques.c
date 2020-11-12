//
// Created by Anis Boubaker on 2020-10-29.
//

#include "mathematiques.h"


double approx_pi(int nb_termes)
{
    int i;
    double resultat;
    int signe;

    afficher_table_mult(10);

    resultat = 0;
    signe = 1;
    for(i = 1; i < 2*nb_termes ; i+=2)
    {
        resultat+= signe * (1.0 / i);
        signe *=-1;
    }

    return resultat * 4;
}


void afficher_table_mult(int max)
{
    int i, j;

    //5 10 15 ... 50. ... 5*max

    if(max > TABLE_MAXIMUM)
    {
        max = TABLE_MAXIMUM;
    }


    for(j=1; j<=max; j++)
    {
        for (i = 1; i <= max; i++)
        {
            printf("%-6d", i * j);
        }
        printf("\n");
    }
}