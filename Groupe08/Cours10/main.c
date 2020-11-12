#include <stdio.h>


#define TAILLE_MAX_TABLEAU 100


/*
 * min_tab
 * Ecrire une fonction qui prend en paramètre
 * un tableau d'entiers, et qui retourne la valeur
 * minimale dans le tableau.
 */
int min_tab(int tab[], int nb_elts);

int max_tab(int tab[], int nb_elts);

/*
 * Écrire une fonction minmax_tab
 * qui reçoit un tableau d'entiers en paramètre
 * et retourne la valeur minimale et la valeur
 * maximale.
 */
//int minmaxmoy_tab(int tab[], int nb_elts, ??? );

int main() {
    int var2 = 55;
    int var3 = 60;
    double var1 = 10;

    int* pointeur_vers_entier;
    double* pointeur_vers_reel;

    int** pointeur_vers_ptr_entier;

    //////////

    printf("Adresse de var1: %p\n", &var1);
    printf("Adresse de var2: %p\n", &var2);


    pointeur_vers_entier = &var2;
    //pointeur_vers_entier = 50;

    printf("Adresse dans le pointeur: %p\n", pointeur_vers_entier);

    printf("Contenu de var2: %d\n", var2);

    *pointeur_vers_entier = 1000;

    printf("Contenu de var2: %d\n", var2);

    printf("Contenu: %d\n", *pointeur_vers_entier);

    pointeur_vers_entier = &var3;

    printf("Contenu: %d\n", *pointeur_vers_entier);



    /*int tablo[TAILLE_MAX_TABLEAU] = {5, 3, 2, 100, 1000, 25, 75};

    int le_min;

    le_min = min_tab(tablo, 7);

    printf("La valeur minimale: %d\n", le_min);

    printf("La valeur maximale: %d\n", max_tab(tablo, 7));
    */

    return 0;
}



int min_tab(int tab[], int nb_elts)
{
    int i;
    int min=tab[0];
    for(i=0; i<nb_elts; i++)
    {
        if(tab[i]<min)
        {
            min = tab[i];
        }
    }
    return min;
}

int max_tab(int tab[], int nb_elts)
{
    int i;
    int max=tab[0];
    for(i=0; i<nb_elts; i++)
    {
        if(tab[i]>max)
        {
            max = tab[i];
        }
    }
    return max;
}