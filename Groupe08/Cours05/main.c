#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Jeu qui tire au hasard un nombre.
 * Ensuite l'utilisateur a xx secondes pour entrer un autre nombre
 * dont la somme des chiffres est la même que le nombre tiré au
 * hasard.
 *
 * Hasard: 675
 * Saisir: 99
 */


int nb_aleatoire(int min, int max)
{
    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int main() {
    unsigned int nb_hasard;
    unsigned int nb_saisi;
    unsigned int somme_hasard;
    unsigned int somme_saisi;
    unsigned int reste_divisions;

    unsigned temps_t1;

    temps_t1 = (unsigned int)time(NULL);
    printf("Temps_t1 contient: %u\n", temps_t1);



    srand((unsigned int)time(NULL));
    rand();

    nb_hasard = nb_aleatoire(0, 40000); // 0 et 32767

    somme_hasard = 0;
    reste_divisions = nb_hasard;
    while( reste_divisions > 0 )
    {
        somme_hasard = somme_hasard +  reste_divisions % 10;
        reste_divisions = reste_divisions / 10;
    }
    //printf("Nombre tiré au hasard: %u\n", nb_hasard);
    //printf("Somme des chiffres: %u\n", somme_hasard);

    //Saisie du nombre et somme de ses chiffres
    printf("Saisir un nombre dont la somme des chiffres est égale à celle de:\n");
    printf("%u : ", nb_hasard);
    scanf("%u", &nb_saisi);

    somme_saisi = 0;
    reste_divisions = nb_saisi;
    while( reste_divisions > 0 )
    {
        somme_saisi = somme_saisi +  reste_divisions % 10;
        reste_divisions = reste_divisions / 10;
    }

    if(somme_saisi == somme_hasard)
    {
        printf("Bravo!\n");
    }
    else
    {
        printf("Mauvaise réponse!\n");
    }

    return 0;
}
