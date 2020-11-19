#include <stdio.h>
#include "utilitaires_tab2d.h"
#include <assert.h>

int test_moyennne_tab_2d(void)
{
    double moyenne;

    //de 4 lignes et 6 colonnes
    int tab_2d[MAX_LIGNES][MAX_COLONNES] = { {12, 6, 3, 3} ,
                                             {6, 6, 12},
                                             {12, 12} };

    //Le résultat devrait être 3.
    moyenne = moyenne_tab2d(tab_2d, 4, 6);

    assert( moyenne == 3 );

    moyenne = moyenne_tab2d(tab_2d, 2, 2);

    assert( moyenne == 7.5 );

    return 1;
    //printf("La moyenne des valeurs: %lf\n", moyenne);
}

int main(void) {

    test_moyennne_tab_2d();

    return 0;
}
