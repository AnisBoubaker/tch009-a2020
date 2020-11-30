#include <stdio.h>
#include "chaines.h"
#include <string.h>
#include <stdlib.h>

#define TAILLE_MAX_CHAINE 100


//double moyenne(int tab[], int nb_elts);

#define MODE_NORMAL

#ifdef MODE_NORMAL

int est_nombre(const char chaine[])
{
    for(int i=0; chaine[i]!='\0'; i++)
    {
        if(chaine[i]<'0' || chaine[i]>'9')
        {
            return 0;
        }
    }
    return 1;
}

int main() {
    char saisie[TAILLE_MAX_CHAINE];
    int valeur_num;


    printf("Saisir une valeur: ");
    fgets(saisie, TAILLE_MAX_CHAINE, stdin);
    saisie[ strlen(saisie)-1 ] = '\0';

    //À ne jamais faire!!
    //valeur_num = (int)saisie;

    if( est_nombre(saisie) )
    {
        valeur_num = atoi(saisie);


        printf("Valeur numérique saisie: %d\n", valeur_num);
        valeur_num+=10;
        printf("Valeur résultante: %d\n", valeur_num);
    }
    else
    {
        printf("La valeur saisie n'est pas un nombre!\n");
    }


    // "100"

    /*int age = 25;
    double salaire = 100005.50;
    char resultat[TAILLE_MAX_CHAINE];

    //printf("Bonjour, vous avez %d ans, et vous gagnez %.2lf $/annee\n", age, salaire);

    sprintf(resultat, "Bonjour, vous avez %d ans, et vous gagnez %.2lf $/annee\n", age, salaire);

    printf("%s", resultat);
    */

    /*char prenom[TAILLE_MAX_CHAINE];
    char nom[TAILLE_MAX_CHAINE];
    char nom_prenom[TAILLE_MAX_CHAINE*2];

    printf("Veuillez saisir votre prénom: ");
    fgets(prenom,TAILLE_MAX_CHAINE, stdin);
    prenom[ strlen(prenom)-1 ] = '\0';

    printf("Veuillez saisir votre nom: ");
    fgets(nom,TAILLE_MAX_CHAINE, stdin);
    nom[ strlen(nom)-1 ] = '\0';

    strncpy(nom_prenom, prenom, TAILLE_MAX_CHAINE);
    strncat(nom_prenom, " ", TAILLE_MAX_CHAINE*2);
    strncat(nom_prenom, nom, TAILLE_MAX_CHAINE*2);

    printf("Nom et prénom: %s", nom_prenom);

    */

    return 0;
}

#else
int main(void)
{
}

#endif




/*char bonjour[]="Bonjour tout le monde!";
    char chaine_saisie[TAILLE_MAX_CHAINE];
    char copie_saisie[TAILLE_MAX_CHAINE];


    printf("La chaine initiale: %s\n", bonjour);
    printf("La taille est: %d\n", nb_caracteres(bonjour) );
    printf("La taille est: %d (avec strlen)\n", strlen(bonjour)  );


    printf("Veuillez saisir une chaine de caractères: ");
    //Attention: ne pas mettre le & car chaine_saisie est un tableau
    //Tout tableau est un pointeur (donc une adresse)
    //scanf("%s", chaine_saisie);
    //Le scanf arrête la lecture au premier caractère "vide" (espace, tabulation, Enter)

    fgets(chaine_saisie, TAILLE_MAX_CHAINE, stdin);
    //Supprimer le \n supreflu qui a été lu par fgets.
    chaine_saisie[ strlen(chaine_saisie)-1 ] = '\0';

    printf("Chaine qui a été saisie: %s\n", chaine_saisie);

    //strcpy(copie_saisie, chaine_saisie);
    strncpy(copie_saisie, chaine_saisie, TAILLE_MAX_CHAINE);
    printf("La copie de la chaine: %s", copie_saisie);
    */


/*
 *

    //(5, 15, 20, 35)
    int tab[10] = {5, 15, 20, 35};


    //Créer une chaine de caractères
    //char une_chaine[8]={'B', 'o', 'n', 'j', 'o', 'u', 'r', '\0'}
    char une_chaine2[] = "Bonjour, j'adore coder en langage C!";
    // "Bonjour" <==> {'B', 'o', 'n', 'j', 'o', 'u', 'r', '\0'}

    //%s : (String) Afficher une chaine de caractères
    printf("%s\n", une_chaine2);

    printf("Le 3e caractere: %c\n", une_chaine2[7]);

    int nb_caracteres = 0;
    while(une_chaine2[nb_caracteres]!='\0')
    {
        nb_caracteres++;
    }
    printf("La chaine %s contient %d caracteres.\n", une_chaine2, nb_caracteres);

    //Une autre façon de compter les caractères (i contiendra le nombre de caractères)
    int i;
    for(i=0; une_chaine2[i]!='\0'; i++)
        ;



    //Calculer le nombre de caractères alphabétiques de la chaine de caractère une_chaine2
    //a->z, A->Z
    nb_caracteres = 0;
    i = 0;
    while(une_chaine2[i]!='\0')
    {
        //Majuscules
        if(une_chaine2[i]>='A' && une_chaine2[i]<='Z')
        {
            nb_caracteres++;
        }
        //Minuscule
        if(une_chaine2[i]>='a' && une_chaine2[i]<='z')
        {
            nb_caracteres++;
        }
        i++;
    }
    printf("Le nombre de caractères alphabétiques de %s est: %d", une_chaine2, nb_caracteres);








    for(int i=0; i<7; i++)
    {
        printf("%c", une_chaine[i]);
    }



*/