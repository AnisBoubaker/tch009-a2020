#include <stdio.h>

#define NOMBRE_ETUDIANTS_MAX 40


int main() {
    /*
 * Programme qui lit 5 notes au clavier
* qui les stocke dans un tableau.
* Après avoir lu, calculer la moyenne de toutes
* les notes et afficher la moyenne.
*
 */
    double notes[NOMBRE_ETUDIANTS_MAX];
    int nb_etudiants;
    double moyenne;
    double saisie;
    int i;

    printf("Saisir les notes (-1 pour terminer)\n");
    nb_etudiants = 0;
    do{
        printf("Note: ");
        scanf("%lf", &saisie);
        if(saisie!=-1)
        {
            notes[nb_etudiants] = saisie;
            nb_etudiants++;
        }
    } while(saisie != -1 && nb_etudiants < NOMBRE_ETUDIANTS_MAX);


    /*for(i=0; i<NOMBRE_ETUDIANTS_MAX; i++)
    {
        printf("Note %d: ", i+1);
        scanf("%lf", &notes[i]);
    }*/

    moyenne = 0;
    for(i=0; i < nb_etudiants ; i++)
    {
        moyenne+=notes[i];
    }
    moyenne /= nb_etudiants;

    printf("Moyenne: %lf\n", moyenne);

    return 0;
}



/*int a = 10;
    int i;
    int tab[50] = { 0 };
    //Déclarer un tableau de 35 éléments de type double
    double notes[NOMBRE_ETUDIANTS_MAX] = {89, 78, 0, 56, 100, 45};

    for(i=0; i<50; i++)
    {
        tab[i] = 1;
    }



    printf("Contenu de la case ayant pour indice 2: %lf\n", notes[2]);
    notes[2] = 89;

    //notes[-1] = 25;


    //for(i=0; i<=34; i++)
    for(i=0; i<NOMBRE_ETUDIANTS_MAX+5; i++)
    {
        printf("Contenu de la case ayant pour indice %d: %.2lf\n", i, notes[i]);
    }




    */


/*
 * double note1;
    double note2;
    double note3;
    double note4;
    double note5;
    double note6;
    double note7;
    double note8;
    double note9;
    int i;

    for(i=1; i<=9; i++)
    {
        printf("Saisir la note %d: ", i);
        scanf("%lf", &note1);
    }


    printf("Saisir la note 2: ");
    scanf("%lf", &note2);

    printf("Saisir la note 3: ");
    scanf("%lf", &note3);

    printf("Saisir la note 4: ");
    scanf("%lf", &note4);
 */