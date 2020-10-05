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

unsigned int somme_chiffres(unsigned int nombre)
{
    unsigned int la_somme = 0 ;

    while(nombre > 0)
    {
        la_somme = la_somme + nombre%10;
        nombre = nombre / 10;
    }

    return la_somme;
}


int main(void)
{

    //SOUS-PROGRAMME qui calcule la valeur absolue d'un nombre réel
    //val_absolue


    /*unsigned int x, y;
    unsigned int z = 30;

    x = somme_chiffres(z);
    printf("x = %u\n", x);

    y = somme_chiffres(45423);
    printf("y = %u\n", y);*/


    unsigned int nb_hasard;
    unsigned int nb_saisi;
    unsigned int somme_hasard;
    unsigned int somme_saisi;
    unsigned int reste_divisions;

    unsigned int temps_t1;
    unsigned int temps_t2;
    unsigned int temps_reponse;


    srand((unsigned int)time(NULL));
    rand();

    nb_hasard = nb_aleatoire(0, 40000); // 0 et 32767
    somme_hasard = somme_chiffres(nb_hasard);
    /*
    somme_hasard = 0;
    reste_divisions = nb_hasard;
    while( reste_divisions > 0 )
    {
        somme_hasard = somme_hasard +  reste_divisions % 10;
        reste_divisions = reste_divisions / 10;
    }*/
    //printf("Nombre tiré au hasard: %u\n", nb_hasard);
    //printf("Somme des chiffres: %u\n", somme_hasard);

    //Saisie du nombre et somme de ses chiffres
    printf("Saisir un nombre dont la somme des chiffres est égale à celle de:\n");
    printf("%u : ", nb_hasard);
    temps_t1 = (unsigned int)time(NULL);
    scanf("%u", &nb_saisi);
    temps_t2 = (unsigned int)time(NULL);
    temps_reponse = temps_t2-temps_t1;

    somme_saisi = somme_chiffres(nb_saisi);
    /*somme_saisi = 0;
    reste_divisions = nb_saisi;
    while( reste_divisions > 0 )
    {
        somme_saisi = somme_saisi +  reste_divisions % 10;
        reste_divisions = reste_divisions / 10;
    }*/

    if(somme_saisi == somme_hasard && 10 >= temps_reponse)
    {
        printf("Bravo!\n");
    }
    else if(somme_saisi!= somme_hasard)
    {
        printf("Mauvaise réponse!\n");
    }
    else
    {
        printf("Bonne réponse mais temps écoulé!\n");
    }

    return 0;
}
