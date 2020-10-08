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


/*
 * VALEUR_ABSOLUE
 * Calcule la valeur absolue d'un nombre réel
 * ENTREES:
 * - nb (reel): Le nombre dont on veut calculer la valeur absolue
 * SORTIE: LA valauer absolue calculée
 */
double valeur_absolue(double nb);

/*
 * CHOIX_MENU
 * Affiche le menu et permet à l'usager de saisir son choix.
 * Le choix est validé et doit recommencer en cas d'erreur.
 * ENTREE: Aucune
 * Sortie: Le choix de l'usager parmi les option du menu
 */
int choix_menu( void );



int somme_chiffres(int nb);

int main( void ) {
    int x;

    x = choix_menu();


    /*double x = 256.5;
    double y = -45.6;
    double z = 0;



    printf("|x| = %lf\n", valeur_absolue(x) );
    printf("|y| = %lf\n", valeur_absolue(y) );
    printf("|z| = %lf\n", valeur_absolue(z) );
    */

    /*int nombre_genere; //Nombre tiré aléatoirement
    int nombre_saisi; //Réponse de l'usager
    int somme_genere=0; //Somme des chiffres du nombre aléatoire
    int somme_saisi = 0; //Somme des chiffres du nombre saisi

    int quotient_10; //Stocke les divisiions successives par 10 lors calcul

    unsigned int t1; //Temps t1
    unsigned int t2; //temps t2

    srand((unsigned int)time(NULL));
    rand();


    nombre_genere = nb_aleatoire(1, 50000);*/


    /*quotient_10 = nombre_genere;
    while( quotient_10 > 0 )
    {
        somme_genere += quotient_10 % 10;
        quotient_10 /= 10; //quotient_10 = quotient_10 / 10
    }*/

    /*somme_genere = somme_chiffres(nombre_genere);

    //printf("La somme des chiffres de %d: %d\n", nombre_genere, somme_genere);

    printf("Saisir un nombre dont la somme des chiffres egale celle de %d: ", nombre_genere);
    t1 = (unsigned int)time(NULL);
    scanf("%d", &nombre_saisi);
    t2 = (unsigned int)time(NULL);

    /*quotient_10 = nombre_saisi;
    while( quotient_10 > 0 )
    {
        somme_saisi += quotient_10 % 10;
        quotient_10 /= 10; //quotient_10 = quotient_10 / 10
    }*/

    /*somme_saisi = somme_chiffres(nombre_saisi) + 5 * 2;

    //printf("La somme des chiffres de %d: %d\n", nombre_saisi, somme_saisi);

    if(somme_genere == somme_saisi && nombre_saisi!=nombre_genere && t2-t1<=10)
    {
        printf("Bravo!!\n");
    }
    else if(somme_genere == somme_saisi && nombre_saisi!=nombre_genere && t2-t1>10)
    {
        printf("Trop lent...\n");
    }
    else
    {
        printf("Mauvaise réponse!\n");
    }

    */
    return EXIT_SUCCESS;
}




int nb_aleatoire(int min, int max)
{
    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int somme_chiffres(int nb)
{
    int quotient_10;
    int somme;

    quotient_10 = nb;
    while( quotient_10 > 0 )
    {
        somme += quotient_10 % 10;
        quotient_10 /= 10; //quotient_10 = quotient_10 / 10
    }

    return somme;
}


/*
 * Créer la fonction valeur absolue qui retourne la valeur absolue d'un nombre.
 */
double valeur_absolue(double nb)
{
    if(nb<0)
    {
        nb = - nb;
    }
    return nb;
}



int choix_menu( void )
{
    int choix=0;

    while(choix<1 || choix > 3)
    {
        printf("1- Nouveau document\n");
        printf("2- Ouvrir document\n");
        printf("3- Quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);
    }

    return choix;
}
