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
//void copie_chaine(char destination[], const char source[])
void copie_chaine(char* destination, const char* source)
{
    int i;
    for(i=0; source[i]!='\0'; i++)
    {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}

void concatener_chaine(char* dest, const char* src, int max_car);


int main() {
    char nom[MAX_SAISIE];
    char prenom[MAX_SAISIE];

    //Chaine qui va contenir la concaténation du nom et du prénom
    char nom_prenom[2*MAX_SAISIE];

    printf("Entrez votre prénom: ");
    fgets(prenom, MAX_SAISIE, stdin);
    prenom[ strlen(prenom)-1 ] = '\0';

    printf("Entrez votre nom: ");
    fgets(nom, MAX_SAISIE, stdin);
    nom[ strlen(nom)-1 ] = '\0';

    //Valjean, Jean
    strncpy(nom_prenom, nom, MAX_SAISIE); //Valjean
    strncat(nom_prenom, ", ", MAX_SAISIE); //Valjean,
    strncat(nom_prenom, prenom, 2*MAX_SAISIE-strlen(nom_prenom));

    printf("Nom et prénom: %s\n", nom_prenom);


    return 0;
}







/*
    //Déclarer une chaine de caractères:
    //char une_chaine[8] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};
    char une_chaine[9] = "Bonjour\n";

    char saisie[MAX_SAISIE];
    char saisie_copie[MAX_SAISIE];
    char saisie_copie_2[MAX_SAISIE];


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
    taille_calculee = taille_chaine(saisie);
    printf("Taille de la saisie, calculée sans strlen: %d\n", taille_calculee);

    //Écraser le \n avec un \0:
    saisie[strlen(saisie) - 1] = '\0';

    printf("Contenu de la chaine saisie: %s\n", saisie);

    //Copier la chaine de caractères dans une autre
    //strcpy : String Copy
    strncpy(saisie_copie, saisie, 5);
    printf("Contenu de la copie: %s\n", saisie_copie);

    copie_chaine(saisie_copie_2, saisie);
    printf("Contenu de la copie #2: %s\n", saisie_copie_2);
    */