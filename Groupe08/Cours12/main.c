#include <stdio.h>

#define TAILLE_MAX_CHAINE 250

int main() {
    int a =10;
    //(5, 15, 20, 35)
    int tab[10] = {5, 15, 20, 35};

    //Créer une chaine de caractères
    char une_chaine[TAILLE_MAX_CHAINE]={'B', 'o', 'n', 'j', 'o', 'u', 'r'};

    //%s : (String) Afficher une chaine de caractères
    printf("%s", une_chaine);


    /*for(int i=0; i<7; i++)
    {
        printf("%c", une_chaine[i]);
    }*/



    return 0;
}
