//
// Created by Anis Boubaker on 2020-10-29.
//

#include "mathematiques.h"


double approx_pi(int nb_termes)
{
    double resultat;
    int i;
    double terme;

    resultat = 3;

    for(i=0; i<nb_termes; i++)
    {
        //Exemple pour i ==2
        terme = 4.0 / ((i+1)*2); // 4 / 6
        terme /= (i+1)*2 + 1; // terme /= 7
        terme /= (i+1)*2 + 2; // terme /= 8
        if(i % 2 == 1)
        {
            terme *= -1;
        }
        resultat += terme;
    }
    return resultat;
}

void table_multiplication(int max)
{
    int i;
    int j;
    //const int maximum = 100;

    if(max > MAXIMUM)
    {
        max = MAXIMUM;
    }

    for(j=1; j<=max; j++)
    {
        for (i = 1; i <= max; i++) {
            printf("%5d", i * j);
        }
        printf("\n");
    }
}
