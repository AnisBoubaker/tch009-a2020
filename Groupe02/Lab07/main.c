#include <stdio.h>
#include <stdlib.h>
#include "calendrier.h"


int main(void) {
    unsigned int annee; //Année saisie par l'usager

    printf("Saisir l'année: ");
    scanf("%u", &annee);

    //On teste la condition d'année bissextile et on affiche le résultat
    if( est_bisextile(annee) )
    {
        printf("L'année est bissextile.\n");
    }
    else
    {
        printf("L'année n'est pas bissextile.\n");
    }

    return EXIT_SUCCESS;
}

