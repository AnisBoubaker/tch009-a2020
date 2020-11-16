#include <stdio.h>

#define MAX_LIGNES 10
#define MAX_COLONNES 10

void afficher_tab2d(int tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes)
{
    for(int ligne =0; ligne<nb_lignes; ligne++)
    {
        for (int colonne = 0; colonne < nb_colonnes; colonne++) {
            printf("%d\t", tab[ligne][colonne]);
        }
        printf("\n");
    }
}

double moy_tab2d(int tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes)
{
    double moyenne = 0 ;
    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            moyenne+=tab[i][j];
        }
    }
    moyenne /= nb_lignes*nb_colonnes;
    return moyenne;
}

/*  trouver_val
 * Ecrire une fonction qui reçoit un tableau à 2 dimensions
 * Et qui retourne l'indice de la première occurence d'une valeur donnée
 *
 * Elle stocke dans les références ligne et colonne, l'indice de la case où la valeur a été trouvée
 * Si la valeur n'a pas été trouvée, on met -1 dans les références ligne et colonne
 */
void trouver_val(int val_recherche, int tab2d[][MAX_COLONNES], int nb_lignes, int nb_colonnes, int* ligne, int* colonne);

int main() {

    //Tableau à 2 dimensions d'entiers - 4 lignes et 5 colonnes
    int tab1_2d[MAX_LIGNES][MAX_COLONNES];

    //Tableau à 2 dimensions (3 lignes, 8 colonnes) initilisé
    int tab2_2d[MAX_LIGNES][MAX_COLONNES] = { {3, 5, 10}, {6, 10, 3, 12} };
    double moyenne;

    /*
     * 3  5  10  0  0  0  0  0
     * 6 10   3 12  0  0  0  0
     * 0  0   0  0  0  0  0  0
     */
    afficher_tab2d(tab2_2d, 2, 5);

    printf("La case ayant pour indice 0,2: %d\n", tab2_2d[0][2]);
    printf("La case ayant pour indice 1,3: %d\n", tab2_2d[1][3]);


    printf("La moyenne : %lf\n",  moy_tab2d(tab2_2d, 2, 5) );

    return 0;
}
