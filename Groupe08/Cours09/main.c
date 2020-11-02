#include <stdio.h>


/*
 * Programme qui calcule le nième des termes de la suite
 * de Fibonacci.
 *
 * f(0) = 0
 * f(1) = 1
 *
 * Pour n>=2,
 * f(n) = f(n-2) + f(n-1)
 *
 * f(2) = 1
 * f(3) = f(1)+f(2) = 2
 * f(4) = f(3)+f(2) = 3
 *
 *
 *Le nieme terme?
 * L'utilisateur saisit n (on suppose entre 0 et 100)
 */











/*
 * Programme qui lit 5 notes au clavier
 * qui les stocke dans un tableau.
 * Après avoir lu, calculer la somme de toutes
 * les notes et afficher la somme.
 *
 */

#define NOMBRE_ETUDIANTS_MAX 20


int main() {
    double notes[20]; //Initialiser un tableau à des 0 partout
    int mon_tab[] = {10, 20, 30};
    int i;
    double saisie;
    double moyenne;
    int nb_notes; //Taille effective du tableau

    printf("Saisir les notes, -1 pour terminer\n");
    nb_notes=0;
    do{
        printf("Saisir la note de l'étudiant: ");
        scanf("%lf", &saisie);
        if(saisie!=-1)
        {
            notes[nb_notes] = saisie;
            nb_notes++;
        }
    } while(saisie!=-1);

    moyenne = 0;
    for(i=0; i<nb_notes; i++)
    {
        moyenne+=notes[i];
    }
    moyenne /= nb_notes;

    printf("La moyenne: %lf\n", moyenne);

    /*
    for(i=0; i<20; i++)
    {
        notes[i] = 10;
    }

    for(i=0; i<20; i++)
    {
        printf("Note à l'indice: %d: %lf\n", i, notes[i]);
    }*/


    /*
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
    */
    return 0;
}
