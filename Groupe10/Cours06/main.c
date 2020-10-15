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


/*
 * DEC_VERS_BIN
 * Convertir en binaire une valeur décimale.
 * ENTREE (PARAMÈTRES):
 * - (entier) valeur décimale à convertir
 * SORTIE (RETOUR):
 * (entier) la valeur en binaire
 */
int dec_vers_bin(int val);

/*
 * DEC_VERS_BASE
 * Convertir dans une base spécifique une valeur décimale.
 * ENTREE (PARAMÈTRES):
 * - (entier) valeur décimale à convertir
 * - (entier) base dans laquelle on convertit la valeur
 * SORTIE (RETOUR):
 * (entier) la valeur dans la base spécifiée
 */
int dec_vers_base(int val, int base);


/*
 * DEC_VERS_HEXA
 * Convertir en hexadécimal une valeur décimale et l'affiche
 * ENTREE (PARAMÈTRES):
 * - (entier) valeur décimale à convertir
 * SORTIE (RETOUR): Aucune
 */
void dec_vers_hexa(int val);


/*
 * Reçoit une valeur entre 0 et 15 et retourne le
 * chiffre Hexa correspondant sous forme d'un
 * caractère.
 */
char chiffre_hexa(int val);

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
                printf("Valeur à convertir: ");
                scanf("%d", &val);
                printf("La conversion en binaire est: %d\n", dec_vers_base(val, 2));
                break;
            case 2:
                printf("Valeur à convertir: ");
                scanf("%d", &val);
                printf("La conversion en octal est: %d\n", dec_vers_base(val, 8));
                break;
            case 3:
                printf("Valeur à convertir: ");
                scanf("%d", &val);
                printf("La conversion en hexadécimal est : ");
                dec_vers_hexa(val);
                printf("\n");
                break;
            case 4:
                printf("Valeur à convertir: ");
                scanf("%d", &val);
                printf("La conversion en base 6 est: %d\n", dec_vers_base(val, 6));
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
    printf("4. Dec -> Base 6\n");
    printf("99. Quitter\n");

    //printf(">> ");
    //scanf("%d", &choix);

    choix =0;
    while((choix<1 || choix>4) && choix!=99)
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

int dec_vers_bin(int val)
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
        chiffre_octal = quotient % 2;
        resultat += chiffre_octal * ceil(pow(10, puiss));
        quotient /= 2;
        puiss ++;
    }

    return resultat;
}

int dec_vers_base(int val, int base)
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
        chiffre_octal = quotient % base;
        resultat += chiffre_octal * ceil(pow(10, puiss));
        quotient /= base;
        puiss ++;
    }

    return resultat;
}

char chiffre_hexa(int val)
{
    /*if(val <=9)
    {
        return val + 48;
    }
    else
    {
        return val+55;
    }*/
    if(val <=9)
    {
        return val + 48;
    }
    return val+55;
}

void dec_vers_hexa(int val)
{
    char chiffre1, chiffre2;

    chiffre1 = chiffre_hexa( val % 16 );
    val /= 16;
    chiffre2 = chiffre_hexa( val % 16);

    printf("%c%c", chiffre2, chiffre1);
}



