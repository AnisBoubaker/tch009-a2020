/*
 * Programme qui convertit des nombres de et vers les différentes bases sur 8 bits.
 * Auteur: TCH009-02
 * Date: 2020-10-15
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 1. Dec -> Binaire
 * 2. Dec -> Octal
 * 3. Dec -> Hexa
 * 4. Oct -> Dec
 * 5. Oct -> Hexa
 * 99. Quitter
 *
 * > 2
 * Saisir le nombre à convertir: 245
 * 245 en octal donne ...
 *
 * 1. Dec -> Binaire
 * 2. Dec -> Octal
 * 3. Dec -> Hexa
 * 4. Oct -> Dec
 * 5. Oct -> Hexa
 * 99. Quitter
 *
 * > 99
 */

/*
 * MENU
 * Fonction qui affiche le menu et qui gère la saisie de l'usager:
 * si l'usager saisit une mauvaise valeur, on lui redemande de saisir.
 * ENTREES (PARAMETRES):
 * - AUCUNE
 * SORTIE (RETOUR DE LA FONCTION):
 * - Choix valide de l'usager.
 */
int menu(void);

/*
 * DEC_VERS_OCT
 * Convertit une valeur décimale en octal.
 * ENTREES (PARAMETRES):
 * - valeur (entier): Valeur décimale à convertir
 * SORTIE: (entier)
 * Conversion vers l'octal
 */
int dec_vers_oct(int valeur);

/*
 * DEC_VERS_BIN
 * Convertit une valeur décimale en binaire.
 * ENTREES (PARAMETRES):
 * - valeur (entier): Valeur décimale à convertir
 * SORTIE: (entier)
 * Conversion vers le binaire
 */
int dec_vers_bin(int valeur);


/*
 * DEC_VERS_BASE
 * Convertit une valeur décimale vers la base spécifiée en paramètre.
 * ENTREES (PARAMETRES):
 * - valeur (entier): Valeur décimale à convertir
 * - base (entier): Base vers laquelle on convertit
 * SORTIE: (entier)
 * Conversion vers la base demandée
 */
int dec_vers_base(int valeur, int base);


int main()
{
    int choix; //Choix dans le menu
    int val;

    choix  = 0 ;
    while(choix != 99)
    {
        choix = menu();
        switch(choix)
        {
            case 1:
                printf("Valeur à convertir: ");
                scanf("%d", &val);
                printf("La valeur convertie: %d\n", dec_vers_base(val, 2));
                break;
            case 2:
                printf("Valeur à convertir: ");
                scanf("%d", &val);
                printf("La valeur convertie: %d\n", dec_vers_base(val, 8));
                break;
            case 3:
                printf("On convertit vers l'hexadécimal.\n");
                break;
            case 4:
                printf("Valeur à convertir: ");
                scanf("%d", &val);
                printf("La valeur convertie en base 6: %d\n", dec_vers_base(val, 6));
                break;
        }
    }

    printf("Au revoir!\n");


    return EXIT_SUCCESS;
}

int menu(void)
{
    int choix; //Choix de l'usager dans le menu

    printf("1. DEC->BIN\n");
    printf("2. DEC->OCT\n");
    printf("3. DEC->HEXA\n");
    printf("4. DEC->Base 6\n");
    printf("99. Sortir\n");

    choix = 0;
    while((choix<1 || choix>4) && choix!=99 )
    {
        printf(">> ");
        scanf("%d", &choix);
    }


    return choix;
}

int dec_vers_oct(int valeur)
{
    int quotient;
    int somme;
    int compteur;

    compteur = 0;
    quotient = valeur; //quotient = 240
    somme = 0;
    while(quotient != 0)
    {
        somme  = somme  + (quotient % 8) * ceil(pow(10, compteur));
        //ceil: arrondit vers l'entier au dessus
        //floor: arrondit ver l'entier en dessous.

        quotient = quotient / 8; //quotient = 30
        compteur ++;
    }

    return somme;
}

int dec_vers_bin(int valeur)
{
    int quotient;
    int somme;
    int compteur;

    compteur = 0;
    quotient = valeur; //quotient = 240
    somme = 0;
    while(quotient != 0)
    {
        somme  = somme  + (quotient % 2) * ceil(pow(10, compteur));

        quotient = quotient / 2; //quotient = 30
        compteur ++;
    }

    return somme;
}

int dec_vers_base(int valeur, int base)
{
    int quotient;
    int somme;
    int compteur;

    compteur = 0;
    quotient = valeur; //quotient = 240
    somme = 0;
    while(quotient != 0)
    {
        somme  = somme  + (quotient % base) * ceil(pow(10, compteur));

        quotient = quotient / base; //quotient = 30
        compteur ++;
    }

    return somme;
}