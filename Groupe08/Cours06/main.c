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


/*
 * DEC_VERS_BINAIRE
 * Convertit une valeur décimale dans la base 2 (binaire) et retourne la valeur en question.
 * PARAMETRES:
 * - val (int): valeur à convertir.
 * SORTIE (RETOUR): la valeur en binaire.
 */
int dec_vers_binaire(int val);


/*
 * DEC_VERS_BASE
 * Convertit une valeur décimale dans une base (<10)et retourne la valeur en question.
 * PARAMETRES:
 * - val (int): valeur à convertir.
 * - base (int): Base vers laquelle on effectue la conversion
 * SORTIE (RETOUR): la valeur en binaire.
 */
int dec_vers_base(int val, int base);


/*
 * DEC_VERS_HEXA
 * Convertit et affiche une valeur décimale en hexadécimal
 * PARAMETRES:
 * - val (int): valeur à convertir
 * SORTIE (RETOUR): Aucune
 */
void dec_vers_hexa(int val);


/*
 * CARACTERE_HEXA
 * Renvoie le chiffre hexadécimal correspondant à sa valeur en décimal
 * 0 --> 0
 * 1 --> 1
 * .
 * .
 * 9--> 9
 * 10 --> A
 * .
 * .
 * 15 --> F
 */
char caractere_hexa(int val);


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
                printf("Saisir la valeur à convertir: ");
                scanf("%d", &valeur_saisie);
                //printf("%d en binaire: %d\n\n", valeur_saisie, dec_vers_binaire(valeur_saisie));
                printf("%d en binaire: %d\n\n", valeur_saisie, dec_vers_base(valeur_saisie, 2));
                break;
            case 2:
                printf("Saisir la valeur à convertir: ");
                scanf("%d", &valeur_saisie);
                //printf("%d en octal: %d\n\n", valeur_saisie, dec_vers_octal(valeur_saisie));
                printf("%d en octal: %d\n\n", valeur_saisie, dec_vers_base(valeur_saisie, 8));
                break;
            case 3:
                printf("Saisir la valeur à convertir: ");
                scanf("%d", &valeur_saisie);
                //printf("%d en octal: %d\n\n", valeur_saisie, dec_vers_octal(valeur_saisie));
                printf("%d en hexadecimal: ", valeur_saisie);
                dec_vers_hexa(valeur_saisie);
                printf("\n");
                break;
        }
        printf("allo...");
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

int dec_vers_binaire(int val)
{
    int resultat = 0;
    int reste;
    int compteur; //Compte les itérations de la boucle

    compteur = 0;
    while(val != 0)
    {
        reste = val  % 2;
        //resultat  = resulat + reste * pow(10, compteur);
        resultat += reste * ceil(pow(10, compteur));
        //ceil: arrondir une valeur double vers l'entier supérieur
        //floor : arrondir une valeur double vers l'entier inférieur.

        val = val/2;
        compteur++;
    }

    return resultat;
}

int dec_vers_base(int val, int base)
{
    int resultat = 0;
    int reste;
    int compteur; //Compte les itérations de la boucle

    compteur = 0;
    while(val != 0)
    {
        reste = val  %  base;
        //resultat  = resulat + reste * pow(10, compteur);
        resultat += reste * ceil(pow(10, compteur));
        //ceil: arrondir une valeur double vers l'entier supérieur
        //floor : arrondir une valeur double vers l'entier inférieur.

        val = val / base;
        compteur++;
    }

    return resultat;
}


char caractere_hexa(int val)
{
    if(val>=0 && val<=9)
    {
        return val+48;
    }
    else //La valeur est entre 10 et 15
    {
        return val - 10 + 65 ;
    }
}

void dec_vers_hexa(int val)
{
    char ch1, ch2; //Chiffres hexa de la conversion

    ch2 = caractere_hexa( val % 16 );
    val /= 16;
    ch1 = caractere_hexa(val % 16 );

    printf("%c%c", ch1, ch2);
}