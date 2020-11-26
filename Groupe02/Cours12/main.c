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

void concatener_chaine(char* dest, const char* src, int max_car)
{
    int i;
    unsigned long debut_copie = strlen(dest);
    unsigned long taille_src = strlen(src);

    for(i=0; i<=taille_src && i<=max_car; i++)
    {
        dest[i+debut_copie] = src[i];
    }
}

int main() {
    char chaine_saisie[MAX_SAISIE];
    int entier_saisi;
    char chaine_resultante[MAX_SAISIE];

    printf("Saisie le jour: ");
    fgets(chaine_saisie,MAX_SAISIE, stdin);
    chaine_saisie[ strlen(chaine_saisie)-1 ] = '\0';

    //atoi est dans stdlib
    entier_saisi = atoi(chaine_saisie);
    //atof convertir une chaine de caractères en valeur réelle.
    printf("%d\n\n\n\n", entier_saisi+10);

    sprintf(chaine_resultante, "Nous sommes le %s e jour du mois %d de l'année %d\n", chaine_saisie, 11, 2020);

    printf("%s", chaine_resultante);

    return 0;
}

/*
 char nom[MAX_SAISIE];
    char prenom[MAX_SAISIE];

    char chaine1[] = "efga";
    char chaine2[] = "efga";
    int resultat_comparaison;


    resultat_comparaison = strcmp(chaine1, chaine2);
    if(resultat_comparaison>0)
    {
        printf("Chaine 1 est plus grande que chaine 2.\n");
    }
    else if(resultat_comparaison<0)
    {
        printf("Chaine 1 est plus petite que chaine 2.\n");
    }
    else
    {
        printf("Chaine1 et chaine2 sont identiques.\n");
    }

    //Ne jamais comparer comme ceci:
    //chaine1 == chaine2
    if( strcmp(chaine1, chaine2)==0 )
    {
        printf("Les deux chaines sont identiques!");
    }
    else
    {
        printf("Elles sont différentes!");
    }


    //Ne jamais faire ceci:
    //chaine1 = "Bonjour!";
    strcpy(chaine1, "Bonjour!");


 */



/*

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
    concatener_chaine(nom_prenom, ", ", MAX_SAISIE); //Valjean,
    concatener_chaine(nom_prenom, prenom, 2*MAX_SAISIE-strlen(nom_prenom));

    printf("Nom et prénom: %s\n", nom_prenom);

 */






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