/*
 * Programme qui calcule la factorielle d'un nombre saisi par l'usager.
 * Date: 2020-10-07
 * Auteur: Anis Boubaker
 */


#include <stdio.h>
#include <stdlib.h>

/*
 * FACTORIELLE
 * Calcule la valeur factorielle d'un nombre nb
 * nb! = 1*2*3*...*nb
 * Entrées:
 * - nb(entier): Le nombre dont on veut calculer la factorielle
 * Sortie: La valeur de la factorielle calculée.
 */
double factorielle(int nb);


int main(void)
{





    int saisie; // Valeur saisie par l'usager
    double fact; //Stocke le calcul de la factorielle

    printf("Entrez une valeur entière pour le calcul de la factorielle: ");
    scanf("%d", &saisie);

    //fact = factorielle(saisie);

    printf("%d ! = %.0lf", saisie, factorielle(saisie) );

    return EXIT_SUCCESS;
}

/***
 *
 * @param nb
 * @return
 */
double factorielle(int nb)
{
   double resultat = 1; //Stocke les multiplications successives
   int i;

   //nb! = 1* 2 * 3 * ... * nb
   //nb! = nb * nb-1 * nb-2 * .... * 2 * 1

   i= 2 ;
   resultat = 1;
   while(i <= nb)
   {
       resultat = resultat * i;
       i++;
   }

   return resultat;
}