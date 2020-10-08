/**
 * Un nombre est tiré au hazard. L'utilisateur a 10 sec pour saisir un nombre
 * dont la somme des chiffres est la même que la somme des chiffres du nombre
 * au hazard.
 *
 * Exemple:
 * Saisir un nombre dont la somme des chiffres est la même que 23456: 14636
 * Bravo!
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int nb_aleatoire(int min, int max)
{
    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

//Ecrire une fonction qui calcule la valeur absolue d'un réel (val_abs)


int somme_chiffres(int nb)
{
    int somme = 0;
    int quotient;

    quotient = nb;
    while(quotient>0)
    {
        somme += quotient%10;
        quotient /= 10;
    }

    return somme;
}


int main(void)
{
    int nombre_tire; //Nombre aléatoire obtenu
    int quotient; //Quotient des divisions par 10
    int somme_tire;
    int nombre_saisi;
    int somme_saisi; //Somme des chiffres du nombre saisi
    unsigned int t1, t2; //Deux temps pour mesurer le temps de réponse

    srand((unsigned int)time(NULL));
    rand();


    nombre_tire = nb_aleatoire(1, 100000);
    somme_tire = somme_chiffres(nombre_tire);

    /*quotient = nombre_tire;
    somme_tire = 0;
    while(quotient > 0 )
    {
        somme_tire = somme_tire + quotient % 10;
        quotient = quotient / 10;
    }*/

    //printf("%d => %d", nombre_tire, somme_tire);

    printf("Saisir un nombre dont la somme des chiffres est la même que:\n");
    printf("%d : ", nombre_tire);
    t1 = (unsigned int)time(NULL);
    scanf("%d", &nombre_saisi);
    t2 = (unsigned int)time(NULL);

    somme_saisi = somme_chiffres(nombre_saisi);

    /*quotient = nombre_saisi;
    somme_saisi = 0;
    while(quotient > 0 )
    {
        somme_saisi += quotient % 10; //Somme_saisi = somme_saisi + quotient % 10
        quotient /= 10;
    }*/


    if(somme_tire == somme_saisi && t2-t1<=10)
    {
        printf("Bravo!\n");
    }
    else if(somme_tire == somme_saisi && t2-t1>10)
    {
        printf("Temps écoulé...\n");
    }
    else
    {
        printf("Mauvaise réponse!\n");
    }

    return EXIT_SUCCESS;
}
