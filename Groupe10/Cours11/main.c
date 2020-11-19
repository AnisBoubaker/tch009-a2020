#include <stdio.h>
#define MAX_LIGNES 4
#define MAX_COLONNES 6

int main() {
    //Exemple de tableau à une dimension
    int tab_1d[10] = {23, 5, 10, 5};

    //Tableau à deux dimensions
    //de 4 lignes et 6 colonnes
    int tab_2d[MAX_LIGNES][MAX_COLONNES] = { {23, 5, 10, 5} ,
                         {10, 3, 4},
                         {5, 12} };

    printf("Valeur de la case 1, 2: %d\n", tab_2d[1][2]);
    printf("Valeur de la case 2, 1: %d\n", tab_2d[2][1]);
    printf("Valeur de la case 3, 2: %d\n", tab_2d[3][2]);

    tab_2d[2][4] = 10;

    for(int ligne=0; ligne < MAX_LIGNES; ligne++)
    {
        //ligne = 1
        for(int colonne=0; colonne<MAX_COLONNES; colonne++)
        {
            //colonne =2
            printf("%d\t", tab_2d[ligne][colonne]);
        }
        printf("\n");
    }


    return 0;
}
