/*
 * Programme qui convertit des nombres de et vers les différentes bases sur 8 bits.
 * Auteur : TCH009-10
 * Date: 2020-10-15
 */


/*
 *
 * 1. Dec -> Bin
 * 2. Dec -> Oct
 * 3. Dec -> Hexa
 * 99. Quitter
 * >> 1
 *
 * Valeur à convertir: 19
 * Valeur en binaire: 10011
 *
 * 1. Dec -> Bin
 * 2. Dec -> Oct
 * 3. Dec -> Hexa
 * 99. Quitter
 * >> 99
 *
 * Au revoir!
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * MENU
 * Afficher le menu du programme et de gérer la saisie de l'utilisateur.
 * Si la saisie est incorrecte, on redemande jusqu'à obtenir une valeur
 * adéquate.
 * ENTREE (PARAMETRES): Rien
 *
 * SORTIES (RETOUR): entier: choix de l'utilisateur
 */
int menu(void);

/*
 * DEC_VERS_OCT
 * Convertir en octal une valeur décimale.
 * ENTREE (PARAMÈTRES):
 * - (entier) valeur décimale à convertir
 * SORTIE (RETOUR):
 * (entier) la valeur en octal
 */
int dec_vers_oct(int val);


int main()
{
    int choix;
    int val;

    choix = 0;
    while(choix != 99)
    {
        choix = menu();
        switch(choix)
        {
            case 1:
                printf("On convertit le décimal vers le binaire...\n");
                break;
            case 2:
                printf("Valeur à convertir: ");
                scanf("%d", &val);
                printf("La conversion en octal est: %d\n", dec_vers_oct(val));
                break;
            case 3:
                printf("On convertit le décimal vers l'hexadécimal...\n");
                break;
        }

    }

    printf("Au revoir!\n");

    return EXIT_SUCCESS;
}

int menu(void)
{
    int choix;

    printf("1. Dec -> Bin\n");
    printf("2. Dec -> Oct\n");
    printf("3. Dec -> Hex\n");
    printf("99. Quitter\n");

    //printf(">> ");
    //scanf("%d", &choix);

    choix =0;
    while((choix<1 || choix>3) && choix!=99)
    {
        printf(">> ");
        scanf("%d", &choix);
    }

    return choix;
}

int puissance(int val, int puiss)
{
    int resultat = 1;
    int compteur = 0;
    while(compteur<puiss)
    {
        resultat *= val;
    }
    return resultat;
}

int dec_vers_oct(int val)
{
    int quotient;
    int chiffre_octal;
    int resultat;
    int puiss;

    quotient = val;
    puiss = 0;
    resultat  = 0;
    while(quotient != 0)
    {
        chiffre_octal = quotient % 8;
        resultat += chiffre_octal * ceil(pow(10, puiss));
        //ceil: Arrondit un réel à l'entier supérieur
        //floor: Arrondit un réel à l'entier inférieur
        quotient /= 8;
        puiss ++;
    }

    return resultat;
}




