/*
 * Programme qui convertit des nombres de et vers les différentes bases sur 8 bits
 * Date: 2020-10-13
 * Auteur: TCH009-Groupe-08
 */


/*
 * Saisir une valeur décimale:
 *
 * Choisir vers quelle base la convertir
 *
 * Afficher la valeur dans la base retenue.
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * MENU
 * Affiche le menu du programme et fait saisir le choix de l'usager.
 * Le choix de l'usager est validé, en cas de réponse incorrecte, l'usager
 * doit resaisir son choix.
 * ENTREES (paramètres): Aucune
 * Sortie (valeur de retour): Choix valide de l'usager
 */
int menu(void);


/*
 * DEC_VERS_OCTAL
 * Convertit une valeur décimale dans la base 8 (octal) et retourne la valeur en question.
 * PARAMETRES:
 * - val (int): valeur à convertir.
 * SORTIE (RETOUR): la valeur en octal.
 */
int dec_vers_octal(int val);


int dec_vers_binaire(int val);


int main(void)
{

    int choix_menu ;
    int valeur_saisie;

    choix_menu = 0;
    while(choix_menu!=99)
    {
        choix_menu = menu();
        switch(choix_menu)
        {
            case 1:
                printf("Nous allons convertir vers le binaire!\n");
                break;
            case 2:
                printf("Saisir la valeur à convertir: ");
                scanf("%d", &valeur_saisie);
                printf("%d en octal: %d\n\n", valeur_saisie, dec_vers_octal(valeur_saisie));
                break;
            case 3:
                printf("Nous allons convertir vers l'hexadécimal!\n");
                break;
        }
    }


    printf("Au revoir!\n");

    return EXIT_SUCCESS;
}


int menu(void)
{
    int choix; //Stocke le choix de l'usager dans le menu

    printf("Choisir une des options suivantes: \n");
    printf("1. Convertir du décimal au binaire\n");
    printf("2. Convertir du décimal à l'octal\n");
    printf("3. Convertir du décimal à l'hexadécimal\n");
    printf("99. Sortir du programme\n");

    choix = 0;
    while( (choix<1 || choix>3) && choix!=99)
    {
        printf(">> ");
        scanf("%d", &choix);
        if((choix<1 || choix>3) && choix!=99)
        {
            printf("Erreur, veuillez resaisir ");
        }
    }

    return choix;
}

int dec_vers_octal(int val)
{
    int resultat = 0;
    int reste;
    int compteur; //Compte les itérations de la boucle

    compteur = 0;
    while(val != 0)
    {
        reste = val  % 8;
        //resultat  = resulat + reste * pow(10, compteur);
        resultat += reste * ceil(pow(10, compteur));
        //ceil: arrondir une valeur double vers l'entier supérieur
        //floor : arrondir une valeur double vers l'entier inférieur.

        val = val/8;
        compteur++;
    }

    return resultat;
}