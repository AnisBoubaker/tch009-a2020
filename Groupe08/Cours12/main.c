#include <stdio.h>

#define TAILLE_MAX_CHAINE 250

//double moyenne(int tab[], int nb_elts);

int main() {
    //(5, 15, 20, 35)
    int tab[10] = {5, 15, 20, 35};


    //Créer une chaine de caractères
    //char une_chaine[8]={'B', 'o', 'n', 'j', 'o', 'u', 'r', '\0'}
    char une_chaine2[] = "Bonjour";
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

    //Calculer le nombre de caractères alphabétiques de la chaine de caractère une_chaine2
    //a->z, A->Z

    int i;
    for(i=0; une_chaine2[i]!='\0'; i++)
        ;

    /*for(int i=0; i<7; i++)
    {
        printf("%c", une_chaine[i]);
    }*/



    return 0;
}
