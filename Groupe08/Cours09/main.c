#include <stdio.h>

/*
 * Programme qui lit 5 notes au clavier
 * qui les stocke dans un tableau.
 * Après avoir lu, calculer la somme de toutes
 * les notes et afficher la somme.
 *
 */



int main() {
    double notes[5];
    double somme;
    int i;

    //for(i=0; i<=4; i++)
    for(i=0; i<5; i++)
    {
        printf("Saisir la note de l'étudiant-e %d: ", i+1);
        scanf("%lf", &notes[i]);
    }

    //On fait la somme:
    somme = 0;
    for(i=0; i<5; i++)
    {
        somme+= notes[i];
    }

    printf("La somme des notes est: %lf\n", somme);

    return 0;
}
