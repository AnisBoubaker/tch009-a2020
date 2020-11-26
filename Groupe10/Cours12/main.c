#include <stdio.h>
#include <string.h>

#define MAX_SAISIE 250

int taille_chaine(const char* chaine);

int taille_chaine(const char chaine[])
{
    int taille = 0;
    while(chaine[taille]!='\0')
    {
        taille++;
    }

    return taille;
}

int taille_chaine_sans_espaces(const char chaine[])
{
    int i = 0;
    int taille=0;
    while(chaine[i]!='\0')
    {
        if(chaine[i]!=' ')
        {
            taille++;
        }
        i++;
    }

    return taille;
}

void copie_chaine(char* dest, const char* src)
{
    int i;
    for(i=0; src[i]!='\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i]='\0';
}


void chaine_concat(char* dest, const char* src);



int main() {
    char chaine1[MAX_SAISIE] = "Bonjour";
    char chaine2[] = " tout le monde!";

    strcat(chaine1, chaine2);

    printf("%s", chaine1);




    return 0;
}









/*char une_chaine[] = "Bonjour le monde!";
    char copie[MAX_SAISIE];

    strncpy(copie, une_chaine,MAX_SAISIE);
    printf("%s\n", copie);
    //Interdit
    //copie = une_chaine;

    //Interdit: possible uniquement lors de l'initialisation
    //de la chaine de caractères.
    //
    // copie = "Bonjour!";
    strncpy(copie, "Bonjour!", MAX_SAISIE);
    printf("%s\n", copie);

    */


/*char nom[MAX_SAISIE];
    int taille_saisie;
    int taille_calculee;

    printf("Veuillez saisir votre nom: ");
    //La lecture s'arrête dès qu'un caractère vide est rencontré:
    //espace, tabulation, Enter
    //scanf("%s", nom);
    fgets(nom, MAX_SAISIE, stdin );
    nom[ strlen(nom)-1 ] = '\0';

    //Ecrire le code permettant de calculer la taille de la chaine
    //de caractères "nom"
    taille_calculee=0;
    while(nom[taille_calculee]!='\0')
    {
        taille_calculee++;
    }
    printf("La taille calculée: %d\n", taille_calculee);


    //nom[10] = '\0';
    //String length
    taille_saisie = strlen(nom);
    printf("Taille de la chaine saisie: %d\n", taille_saisie);





    nom[ taille_saisie - 1] = '\0';
    printf("Vous avez saisi: %s\n", nom);
    printf("Fin du programme!");*/




/*//char premiere_chaine[8] = {'B', 'o', 'n', 'j','o','u','r','\0'};
    char premiere_chaine[] = "Bonjour";

    //printf("%d\n", sizeof(premiere_chaine));

    //%s: (s: String) Affiche une chaine de caractères
    printf("La chaine contient: %s\n", premiere_chaine);
    */