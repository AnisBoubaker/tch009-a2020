#include <stdio.h>
#include "util_tableaux.h"
#include "test_util_tableaux.h"

#define MODE_TEST

#ifdef MODE_NORMAL



int main(void) {
    int tab_2d[NB_LIGNES][NB_COLONNES] = { {5, 7, 34},
                          {2, 3},
                          {5, 6}};

    //int tab_2d_nul[3][4] = {0};
    int tab_2d_nul[3][4] = {{0}};
    int tab_1d[100];
    printf("Contenu de la case 2,1: %d\n", tab_2d[2][1]);

    tab_2d[2][3] = 8;
    printf("Contenu de la case 2,3: %d\n", tab_2d[2][3]);

    afficher_tab2d(tab_2d, 3,3);

    printf("La moyenne des valeurs: %lf\n",
           moy_tab2d(tab_2d, 3, 3));

    //INTERDIT!!
    //tab_2d[2] = 100;

    return 0;
}
#else
int main(void) {

    test_max_tab1d();
    test_moy_tab2d();

    return 0;
}
#endif