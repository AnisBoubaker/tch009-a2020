/*
 * Programme qui convertit des nombres de et vers les différentes bases sur 8 bits.
 * Auteur: TCH009-02
 * Date: 2020-10-15
 */

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

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix; //Choix dans le menu

    choix = menu();

    printf("Le choix de l'usager: %d\n", choix);

    return EXIT_SUCCESS;
}

int menu(void)
{
    int choix; //Choix de l'usager dans le menu

    printf("1. DEC->BIN\n");
    printf("2. DEC->OCT\n");
    printf("3. DEC->HEXA\n");
    printf("99. Sortir\n");

    choix = 0;
    while((choix<1 || choix>3) && choix!=99 )
    {
        printf(">> ");
        scanf("%d", &choix);
    }


    return choix;
}
