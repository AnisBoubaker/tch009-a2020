/*
 * TCH009-08 - Cours 04
 * Exemples présentés durant le cours
 */


#include <stdio.h>
#include <stdlib.h>

int main() {

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
