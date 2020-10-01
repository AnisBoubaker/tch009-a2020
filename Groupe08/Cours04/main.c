/*
 * TCH009-08 - Cours 04
 * Exemples présentés durant le cours
 */


#include <stdio.h>
#include <stdlib.h>

int main() {

    int valeur;
    int compteur; //Compteur de boucle

    /*
     * 10 divisible par 4?
     * 10 / 4 = 2 il reste 2
     *
     * 10 est divisible par 4 si 10 % 4 == 0
     *
     */

    printf("Veuillez saisir une valeur: ");
    scanf("%d", &valeur);

    compteur = 1;
    while(compteur <= valeur)
    {
        if(valeur % compteur == 0)
        {
            printf("%d est divisible par %d\n", valeur, compteur);
        }

        compteur++;
    }




    /*
    //Demander à l'usager de saisir une valeur entre 0 et 100
    //Continuer à lui redemander tant que ce n'est pas le cas.

    int saisie; //Valeur saisie par l'usager

    saisie = -1;
    while(  saisie < 0  || saisie > 100  )
    {
        printf("Veuillez saisir une valeur entre 0 et 100: ");
        scanf("%d", &saisie);
        if(saisie<0 || saisie>100)
        {
            printf("Erreur!\n");
        }
        else
        {
            printf("Merci!\n");
        }
    }

    */




    /*
    double val;  //Base
    int exp;  //Exposant
    double resultat;

    printf("Saisir la base: ");
    scanf("%lf", &val);

    printf("Saisir l'exposant: ");
    scanf("%d", &exp);


    resultat = 1;

    while (exp > 0) //Voir avec !=
    {
        resultat = resultat * val;
        //FAUX: val = val * val; //val*=val;
        exp--; //exp = exp -1
    }


    printf("Le résultat: %.2lf", resultat);

    */






    /*
     int compteur; //Compteur de boucle
    double a;

    a= 1;
    compteur = 0 ;
    while(compteur < 100)
    {
        a = a * 2;
        printf("Valeur de a à l'itération #%d: %.2lf\n", compteur, a);
        compteur = compteur + 1; //compteur++;
    }
    */
    return EXIT_SUCCESS;
}
