#include <stdio.h>
#include "calendrier.h"


int main() {
    int resultat;
    int i;


    printf("ERREUR: %d", ERREUR);

    /*for(i=-2; i<15; i++)
    {
        printf("Le nombre de jours du mois %d: %d\n", i, jour_mois(i, 2020));
    }*/

    printf("%d", est_date_valide(29, 2, 2020));

}


