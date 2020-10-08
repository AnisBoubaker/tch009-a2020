/*
 * Jeu qui demande à l'utilisateur de saisir un nombre dont la somme
 * des chiffres est égale à la somme des chiffres tirés aléatoirement.
 *
 * La réponse doit se faire en moins de 10 sec.
 *
 * Exemple:
 * Saisir un nombre dont la somme des chiffres est la meme que:
 * 45275 : 36185
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int nb_aleatoire(int min, int max)
{
    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int main() {
    int nombre_genere; //Nombre tiré aléatoirement
    int nombre_saisi; //Réponse de l'usager
    int somme_genere=0; //Somme des chiffres du nombre aléatoire
    int somme_saisi = 0; //Somme des chiffres du nombre saisi

    int quotient_10; //Stocke les divisiions successives par 10 lors calcul

    unsigned int t1; //Temps t1


    srand((unsigned int)time(NULL));
    rand();


    t1 = (unsigned int)time(NULL);
    printf("Ce que m'a donné la fonction time: %u\n", t1);

    nombre_genere = nb_aleatoire(1, 50000);

    quotient_10 = nombre_genere;
    while( quotient_10 > 0 )
    {
        somme_genere += quotient_10 % 10;
        quotient_10 /= 10; //quotient_10 = quotient_10 / 10
    }

    //printf("La somme des chiffres de %d: %d\n", nombre_genere, somme_genere);

    printf("Saisir un nombre dont la somme des chiffres egale celle de %d: ", nombre_genere);
    scanf("%d", &nombre_saisi);

    quotient_10 = nombre_saisi;
    while( quotient_10 > 0 )
    {
        somme_saisi += quotient_10 % 10;
        quotient_10 /= 10; //quotient_10 = quotient_10 / 10
    }

    //printf("La somme des chiffres de %d: %d\n", nombre_saisi, somme_saisi);

    if(somme_genere == somme_saisi)
    {
        printf("Bravo!!\n");
    } else
    {
        printf("Mauvaise réponse!\n");
    }


    return EXIT_SUCCESS;
}
