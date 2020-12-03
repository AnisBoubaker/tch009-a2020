#include <stdio.h>

#define MAX_COLS 100

int chercher(int tab[], int nbelt, int val, int resultat[]);

void masquer_chaine(char chaine1[], const char chaine2[]);

void dons_journaliers(double dons[][MAX_COLS], int nb_jours, double resultat[]);

void separe( int tab[], int tab_p[], int tab_n[], int dim,
             long *tot_p, long *tot_n );


int main() {
    int valeurs[] = { 2, -4, 3, 0, 6, -4, -10, 6, 2, -2 };
    int positifs[10];
    int negatifs[10];

    long total_positifs;
    long total_negatifs;

    separe(valeurs, positifs, negatifs, 10, &total_positifs, &total_negatifs);

    printf("Total des positifs: %ld\n", total_positifs);
    for(int i=0; i<10; i++)
    {
        printf("%d ", positifs[i]);
    }
    printf("\n");

    printf("Total des negatifs: %ld\n", total_negatifs);
    for(int i=0; i<10; i++)
    {
        printf("%d ", negatifs[i]);
    }
    printf("\n");


    /*double liste_dons[4][MAX_COLS] = {
            {3,20,15,105.23},
            {2, 15,	100.50},
            {1, 20},
            {4,12.5, 10, 60, 5.25}};

    double sommes[4];

    dons_journaliers(liste_dons, 4, sommes);

    for(int i=0; i<4; i++)
    {
        printf("%lf\n", sommes[i]);
    }*/

    /*char chaine_initiale[] = "Allo toi!";
    char masque[] = "oi .?!";

    printf("Avant la fonction: %s\n", chaine_initiale);

    masquer_chaine(chaine_initiale, masque);

    printf("Après la fonction: %s\n", chaine_initiale);
`   */
    return 0;
}

/*int valeurs[9] = {1,8,2,1,5,3,8,1,2};
    int indices[9];
    int nb_occurences;

    nb_occurences = chercher(valeurs, 9, 2, indices);

    printf("La valeur a été trouvée %d fois!\n", nb_occurences);

    for(int i=0; i < nb_occurences ; i++)
    {
        printf("%d ", indices[i]);
    }
    printf("\n");*/


/*   0  1   2   3   4   5   6   7   8
 * [ 1	8	2	1	5	3	8	1	2 ]
 *   *          *               *
 * Resultat:
 * [ 0  3  7 ]
 * nb_occurences=3
 */

int chercher(int tab[], int nbelt, int val, int resultat[])
{
    int nb_occurences = 0;
    for(int i=0; i<nbelt; i++)
    {
        if(tab[i]==val)
        {
            resultat[nb_occurences] = i;
            nb_occurences++;
        }
    }
    return nb_occurences;
}

/*
 * chaine1: "Allo toi"  => "***o**oi"
 * chaine2: "oi"
 */

int est_dans_chaine(char c, char chaine[])
{
    for(int i=0; chaine[i]!='\0'; i++)
    {
        if(chaine[i]== c)
        {
            return 1;
        }
    }
    return 0;
}

void masquer_chaine(char chaine1[], const char chaine2[])
{
    for(int i=0; chaine1[i]!='\0'; i++)
    {
        if( est_dans_chaine(chaine1[i], chaine2)==0  )
        {
            chaine1[i]  = '*';
        }
    }
}


/*
 * int trouve = 0;
        for(int j=0; chaine2[j]!='\0'; j++)
        {
            if(chaine1[i] == chaine2[j])
            {
                trouve = 1;
            }
        }
        if(! trouve)
        {
            chaine1[i] = '*';
        }
 */

void dons_journaliers(double dons[][MAX_COLS], int nb_jours, double resultat[])
{
    for(int i=0; i<nb_jours; i++)
    {
        resultat[i] = 0;
        for(int j=1; j<=dons[i][0]; j++)
        {
            resultat[i] += dons[i][j];
        }
    }
}

void separe( int tab[], int tab_p[], int tab_n[], int dim,
             long *tot_p, long *tot_n )
{
    *tot_p = 0;
    *tot_n = 0;

    for(int i=0; i<dim; i++)
    {
        if(tab[i]>=0)
        {
            tab_p[i] = tab[i];
            tab_n[i] = 0;
            *tot_p += tab[i];
        }
        else
        {
            tab_n[i] = tab[i];
            tab_p[i] = 0;
            *tot_n += tab[i];
        }
    }
}