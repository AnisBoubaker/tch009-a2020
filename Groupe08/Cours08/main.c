#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
 * POW_ENTIER
 * Calcule la
 */
double pow_entier(double n, int puiss);

int main() {

    int nb=0;
    double val = 0 ;
    double total = 0;
    //Saisir: -1, -1, 10, 35, 15, -1

    do
    {
        printf("Valeur: ");
        scanf("%lf", &val);
        if (val >= 0)
        {
            total +=val;
            nb++;
        }
    } while (nb==0 || val >=0 ) ;

    printf("Résultat: %lf\n", total / nb );


    return 0;
}

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

    return resultat;
}

/*
 * Une fonction qui affiche la table de multiplication
 * 1    2   3   4   5   ... 10
 * 2    4   6
 * ..
 * 10   20  30
 */