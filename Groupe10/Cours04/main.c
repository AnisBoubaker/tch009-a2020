#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int nb_aleatoire(int min, int max)
{
    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}


int main() {
    int nombre_tire;
    int compteur;
    double resultat;
    int precision = 2000000000;

    srand((unsigned int)time(NULL));
    rand();


    compteur = 0 ;
    resultat = 0;
    while(compteur<precision)
    {
        nombre_tire = nb_aleatoire(1,6);
        resultat  = resultat + nombre_tire/(double)precision;

        compteur++;
    }

    resultat = resultat / precision;

    printf("La moyenne des lancés: %lf.\n", resultat);





    /*
     * Programme qui demande à l'usager de saisir une valeur
     * entière entre 20 et 75.
     *
     * Si la valeur est correcte, on dit merci!
     * Sinon on lui redemande
     */
    /*int saisie; //Valeur saisie par l'usager
    int borne_min, borne_max;

    borne_min = 20;
    borne_max = 75;

    saisie = 0;
    printf("Saisir une valeur: ");
    while(saisie>=borne_max || saisie<=borne_min)
    {
        scanf("%d", &saisie);
        if(saisie>=borne_max || saisie<=borne_min)
        {
            printf("Erreur! Veuillez re-saisir une valeur entre 20 et 75: ");
        }
    }

    printf("Merci!");

    */




    /*
    //Calcul d'un exposant
    double base ;
    int exposant;
    double resultat;
    int compteur;

    printf("Base? : ");
    scanf("%lf", &base);

    printf("Exposant? : ");
    scanf("%d", &exposant);

    //resultat = base;
    compteur = 0;
    resultat = 1;
    while(compteur<exposant)
    {
        resultat = resultat * base;
        compteur++;
    }

    printf("%lf puissance %d = %lf\n", base, exposant, resultat);
    */

    /*
    //Somme des termes de la série harminique
    int dernier_terme;
    int compteur;
    double somme;

    printf("Dernier terme? :");
    scanf("%d", &dernier_terme);

    compteur = 1;
    somme = 0;
    while(compteur <= dernier_terme)
    {
        somme = somme + 1.0/compteur;
        compteur ++;
    }

    printf("Somme des termes: %lf\n", somme);
    */

    return 0;
}
