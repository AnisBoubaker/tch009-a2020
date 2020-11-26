#include <stdio.h>
#include <string.h>

#define MAX_SAISIE 250

int main() {
    //Déclarer une chaine de caractères:
    //char une_chaine[8] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};
    char une_chaine[9] = "Bonjour\n";
    char saisie[MAX_SAISIE];
    int taille;

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


    //Écraser le \n avec un \0:
    saisie[strlen(saisie) - 1] = '\0';

    printf("%s\n", saisie);
    printf("Programme terminé!");

    return 0;
}
