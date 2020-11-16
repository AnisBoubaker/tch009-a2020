#include <stdio.h>

int main() {

    //Tableau à 2 dimensions d'entiers - 4 lignes et 5 colonnes
    int tab1_2d[4][5];

    //Tableau à 2 dimensions (3 lignes, 8 colonnes) initilisé
    int tab2_2d[3][8] = { {3, 5, 10}, {6, 10, 3, 12} };
    /*
     * 3  5  10  0  0  0  0  0
     * 6 10   3 12  0  0  0  0
     * 0  0   0  0  0  0  0  0
     */

    printf("La case ayant pour indice 0,2: %d\n", tab2_2d[0][2]);
    printf("La case ayant pour indice 1,3: %d\n", tab2_2d[1][3]);

    for(int ligne =0; ligne<3; ligne++)
    {
        for (int colonne = 0; colonne < 8; colonne++) {
            printf("%d\t", tab2_2d[ligne][colonne]);
        }
        printf("\n");
    }



}
