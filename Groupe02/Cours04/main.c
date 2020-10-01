/*
 * TCH009-Gr2 Cours 04
 * Auteur: Anis Boubaker
 * Date: 2020-10-01
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int nb_aleatoire(int min, int max)
{
    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int main(void) {
    int de;
    int compteur;
    int somme;
    double resultat;

    srand((unsigned int)time(NULL));
    rand();

    compteur = 0;
    somme = 0;
    while(compteur < 1000000)
    {
        de = nb_aleatoire(1,6);
        somme = somme + de;
        //Remplace les deux instructions ci-dessus
        // somme = somme + nb_aleatoire(1,6);
        compteur ++;
    }

    resultat = somme / 1000000.0;

    printf("La moyenne des lancés est: %lf\n", resultat);


    /*
    //Programme qui calcule une puissance d'un réel à un exposant entier positif
    double base;
    int exposant;
    double resultat;
    int compteur;

    printf("Saisir la base: ");
    scanf("%lf", &base);

    printf("Saisir l'exposant: ");
    scanf("%d", &exposant);

    resultat = 1;
    compteur = 0 ;
    while(compteur < exposant)
    {
        resultat = resultat * base;
        compteur++;
    }

    printf("%lf à la puissance %d = %lf\n", base, exposant, resultat);
    */



    /*int dernier_terme; //Dernier terme de la série harmonique calculee
    int compteur;
    double somme;

    printf("Saisir le dernier terme: ");
    scanf("%d", &dernier_terme);

    // A ne pas faire à la maison!
    while(15)
    {
        printf("Je suis dans une boucle infinie!\n");
    }



    compteur = 1;
    somme = 0;
    while (compteur <= dernier_terme){
        // 1/1 + 1/2 + 1/3 + ... + 1/n
        somme = somme + 1.0/compteur;
        compteur++; //compteur = compteur + 1;
    }

    printf("Somme des termes: %lf\n", somme);
    */
}
