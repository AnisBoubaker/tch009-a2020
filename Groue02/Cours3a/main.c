/*
 * TCH009-02 - Cours3
 *
 * Exemples présentés durant le cours
 *
 * Date: 2020-09-24
 */


#include <stdio.h>
#include <stdlib.h>


int main() {

    /*
     * Demander à l'utilisateur 3 nombres
     * Afficher le maximum des 3 nombres saisis
     */
    double nb1, nb2, nb3; //3 nombres saisis par l'usager
    double max; // Valeur maximale parmi les 3 nombres siaiss

    printf("Saisir le 1er nombre: ");
    scanf("%lf", &nb1);

    printf("Saisir le 2eme nombre: ");
    scanf("%lf", &nb2);

    printf("Saisir le 3eme nombre: ");
    scanf("%lf", &nb3);



    if(nb1 > nb2)
    {
        max = nb1;
    }
    else
    {
        max = nb2;
    }
    if(nb3 > max)
    {
        max = nb3;
    }

    /*
    if(nb1 > nb2)
    {
        if(nb1 > nb3)
        {
            max = nb1;
        }
        else
        {
            max = nb3;
        }
    }
    else // nb2 > nb1
    {
        if(nb2>nb3)
        {
            max = nb2;
        }
        else
        {
            max = nb3;
        }
    }*/

    printf("Le maximum parmi %lf, %lf et %lf est : %lf\n", nb1, nb2, nb3, max);


    /*
    int x = -25;

    if(x > 0)
    {
        printf("x contient une valeur positive!\n");
        x = -x ;
        printf("L'opposé de x est : %d\n", x);
    }
    */

    /* Correction Lab2
    double valeur; //Valeur saisie par l'usager
    int quotient; //Utilisée pour stocker les divisions /10
    int chiffre1, chiffre2; //Deux chiffres à afficher

    printf("Saisir une valeur: ");
    scanf("%lf", &valeur);

    // Ustilisateur saisit: 12367.3

    //Extraction du 1er chiffre
    quotient = valeur / 10 ; //quotient = 1236
    chiffre1 = quotient % 10;

    //Extraction du 2e chiffre
    quotient /= 10; //quotient = quotient / 10;
    chiffre2 = quotient % 10;

    //Affichage du résultat
    printf("Les deux chiffres sont: %d%d", chiffre2, chiffre1);
    */
    return EXIT_SUCCESS;
}
