#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SAISIE 250

//Un tableau de cacactères est en réalité un
//pointeur vers le premier caractère de l'espace
//réservé au tableau. Les deux notations sont
//équivalenetes;
int taille_chaine(const char* chaine);

int taille_chaine(const char chaine[])
{
    int taille = 0;
    while(chaine[taille]!='\0')
    {
        taille ++;
    }
    //Interdit par l'utilisation du mot clé
    //const sur le paramètre.
    //chaine[0] = 'A';
    return taille;
}


int main() {
    //Déclarer une chaine de caractères:
    //char une_chaine[8] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};
    char une_chaine[9] = "Bonjour\n";
    char saisie[MAX_SAISIE];
    int taille;
    int taille_calculee;
    int i;

    printf("%s", une_chaine);

    printf("Saisir votre nom et prénom: ");
    //scanf("%s", saisie);
    //Scanf arrête la lecture au premier caractère vide:
    //espace, tabulation, Enter

    fgets(saisie, MAX_SAISIE, stdin);
    //saisie contient: "Jean Valjean\n"

    //String Length
    taille = strlen(saisie);
    printf("Taille de la chaine saisie: %d\n", taille);

    //Calculer de la chaine de caractères sans utiliser strlen.
    /*taille_calculee=0;
    i=0;
    while(saisie[i]!='\0')
    {
        taille_calculee++;
        i++;
    }*/
    taille_calculee = taille_chaine(saisie);
    printf("Taille de la saisie, calculée sans strlen: %d\n", taille_calculee);


    //Écraser le \n avec un \0:
    saisie[strlen(saisie) - 1] = '\0';

    printf("%s\n", saisie);
    printf("Programme terminé!");

    return 0;
}
