#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//déclarer une macro
#define ITERATIONS_MAX 10
#define PRECISION_CALCUL_PI 10000

#include "toto.h"
#include "mathematiques.h"

int main() {

    const int iteration_max_2 = 10;

    //iteration_max_2 ++;

    afficher_table_multiplication(ITERATIONS_MAX);

    /*int nb=0;
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

    printf("Résultat: %lf\n", total / nb );*/


    return 0;
}

