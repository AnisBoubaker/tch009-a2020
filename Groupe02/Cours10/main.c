#include <stdio.h>


/*
 * EXERCICE:
 * Écrire une fonction min_tab qui reçoit un tableau d'entiers en
 * paramètre et qui retourne la plus petite valeur du tableau.
 *
 */

int min_tab(int tab[], int nb_elts)
{
    int i;
    int min = tab[0];

    for(i=1; i<nb_elts; i++)
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
    int max = tab[0];

    for(i=1; i<nb_elts; i++)
    {
        if(tab[i] > max)
        {
            max = tab[i];
        }
    }
    return max;
}

double moy_tab(int tab[], int nb_elts)
{
    int i;
    double somme = 0;

    for(i=0; i<nb_elts; i++)
    {
        somme+= tab[i];
    }

    return somme/nb_elts;
}

/**
 * Fonction stat_tab qui calcule des statistiques sur un tableau d'entier:
 * - la valeur minimale
 * - la valeur maximale
 * - la moyenne
 *
 */
int stat_tab(int tab[], int nb_elts, int* adr_min, int* adr_max,
        double* adr_moy)
{
    int i;
    int min = tab[0];
    int max = tab[0];
    double somme = 0;

    for(i=0; i<nb_elts; i++)
    {
        if(tab[i] < min)
        {
            min = tab[i];
        }
        if(tab[i] > max)
        {
            max = tab[i];
        }
        somme += tab[i];
    }

    *adr_min = min;
    *adr_max = max;
    *adr_moy = somme / nb_elts;
}


/*
 * Ecrire une fonction swap
 * Intervertir le contenu de deux variables
 */

void swap(int* adr_var1, int* adr_var2)
{
    int tmp;

    tmp = *adr_var1;
    *adr_var1 = *adr_var2;
    *adr_var2 = tmp;
}

int main()
{
    int tab[] = {10, 45, 18, 3, 120, 160};
    int minimum;
    int maximum;
    double moyenne;


    int a = 10;
    int b = 20;

    swap(&a, &b);
    printf("a contient: %d\n",a );
    printf("b contient: %d\n",b );


    //Appel swap


    stat_tab(tab, 6, &minimum, &maximum, &moyenne);

    printf("Le minimum: %d\n", minimum);
    printf("Le maximum: %d\n", maximum);
    printf("La moyenne: %lf\n", moyenne);




    return 0;
}


/*
 * int mon_tab[] = {10, 2, -15, 1, 20, 10};

    printf("Le minimum: %d\n", min_tab(mon_tab, 6));
    printf("Le maximum: %d\n", max_tab(mon_tab, 6));
    printf("La moyenne: %lf\n", moy_tab(mon_tab, 6));
 */


/*
 * //Declarations
    int presents=15;
    double moyenne = 10.5;
    int* adr_presents;


    //Code

    presents = 20;


    printf("L'adresse de la variable presents: %p\n", &presents);
    printf("L'adresse de la variable moyenne: %p\n", &moyenne);

    //Stocker l'adresse de la variable presents
    adr_presents = &presents;

    printf("L'adresse stockée dans adr_presents: %p\n", adr_presents);

    printf("Contenu de la variable presents: %d\n", presents);
    *adr_presents = 105;
    printf("Contenu de la variable presents: %d\n", presents);

    printf("Contenu à l'adresse adr_presents: %d\n", *adr_presents);


 */