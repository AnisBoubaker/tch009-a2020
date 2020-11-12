#include <stdio.h>

/*
 * Fonction: min_tab
 * Écrire une fonction qui reçoit un tableau d'entiers en
 * paramètre.
 * Retourner la plus petite valeur du tableau.
 *
 */
int min_tab(int tableau[], int nb_elts)
{
    int i;
    int minimum = tableau[0];

    for(i=1; i<nb_elts; i++)
    {
        if(tableau[i]<minimum)
        {
            minimum = tableau[i];
        }
    }

    return minimum;
}

int max_tab(int tableau[], int nb_elts)
{
    int i;
    int maximum = tableau[0];

    for(i=1; i<nb_elts; i++)
    {
        if(tableau[i] > maximum)
        {
            maximum = tableau[i];
        }
    }

    return maximum;
}

double moy_tab(int tableau[], int nb_elts)
{
    double somme = 0;
    int i;

    for(i=0; i<nb_elts; i++)
    {
        somme += tableau[i];
    }

    return somme / nb_elts;
}


void minmax_tab(int tableau[], int nb_elts, int resultats[2])
{
    int i;
    int minimum = tableau[0];
    int maximum = tableau[0];

    for(i=1; i<nb_elts; i++)
    {
        if(tableau[i] > maximum)
        {
            maximum = tableau[i];
        }
        if(tableau[i] < minimum)
        {
            minimum = tableau[i];
        }
    }

    resultats[0] = minimum;
    resultats[1] = maximum;
}

/*
 * Fournit les informations suivantes sur le tableau tab:
 * - le min
 * - le max
 * - la moyenne
 * - ecart type
 */
//void stats_tab(int tab[], int nb_elts, int min_max[], double moy_et[]);




int main() {


    double une_var_reelle = 10.4;
    int une_var=10;
    int* adresse_une_var;
    double* adr_vers_un_reel;

    une_var = 50;

    printf("La variable une_var se trouve à : %p\n", &une_var);
    printf("La variable une_reelle se trouve à : %p\n", &une_var_reelle);

    adresse_une_var = &une_var;

    printf("Contenu de adresse_une_var:  %p\n", adresse_une_var);

    printf("Contenu à l'adresse: %d\n", *adresse_une_var);

    printf("Contenu de une_var: %d\n", une_var);

    *adresse_une_var = 150;

    printf("Contenu de une_var: %d\n", une_var);

    return 0;
}



/*int mon_tab[7]={100, 1300, 200, 34, 14, 190};
    int le_min_et_max[2] = {0};

    printf("Le minimum est: %d\n", min_tab(mon_tab, 6)  );
    printf("Le maximum est: %d\n", max_tab(mon_tab, 6)  );
    printf("La moyenne est: %lf\n", moy_tab(mon_tab, 6));


    minmax_tab(mon_tab, 6, le_min_et_max);

    printf("Contenu de la case 0: %d\n", le_min_et_max[0]);
    printf("Contenu de la case 1: %d\n", le_min_et_max[1]);

    */