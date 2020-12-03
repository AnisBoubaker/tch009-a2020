#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_COLS 100

int chercher(int tab[], int nbelt, int val, int resultat[]);

void masquer_chaine(char chaine[], const char masque[]);

int est_dans_chaine(char recherche, const char chaine[]);

void dons_journaliers(const double dons[][MAX_COLS], int nb_jours, double sommes[])
{
    for(int i=0; i<nb_jours; i++)
    {
        sommes[i] = 0;
        for(int j=1; j<=dons[i][0]; j++)
        {
            sommes[i] += dons[i][j];
        }
    }
}

int nb_aleatoire(int min, int max)
{
    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

/*
 * Écrire une fonction qui génère un mot de passe
 * Doit contenir des lettres (minuscules et majuscules) et des chiffres et des symboles.
 * Codes ascii entre 48 et 122.
 *
 * Elle reçoit:
 * - La taille du mot de passe
 * - Le tableau de caractères où le mot de passe sera stocké
 */
void generer_pass(int taille, char mot_de_passe[])
{   /*
     * taille = 4
     *   0 1 2 3
     * [ a ; x B ]
     */
    for(int i=0; i<taille; i++)
    {
        //mot_de_passe[i] = 'A'; // mot_de_passe[i] = 65;
        mot_de_passe[i] = nb_aleatoire(48, 122);
    }
    mot_de_passe[taille] = '\0';
}


int main() {
    char pass[MAX_COLS];

    srand((unsigned int)time(NULL));
    rand();

    generer_pass(10, pass);

    printf("%s\n", pass);



    /*double liste_dons[4][MAX_COLS] = { {3,20,15,105.23},
                               {2, 15, 100.50},
                               {1, 20},
                               {4,12.50,10, 60, 5.25}};

    double sommes[4];

    dons_journaliers(liste_dons, 4, sommes);

    for(int i=0; i<4; i++)
    {
        printf("%lf\n", sommes[i]);
    }*/

    /*
    char chaine_initiale[] = "Allo toi!";
    char masque[] = "oi .?!";

    masquer_chaine(chaine_initiale, masque);

    printf("%s\n", chaine_initiale);
    */



    /*
    int tableau[] = {1,8,2,1,5,3,8,1,2};
    int tab_occurences[9];
    int nb_occurences;

    nb_occurences = chercher(tableau, 0, 1, tab_occurences);

    printf("La valeur a été trouvee %d fois.\n", nb_occurences);
    for(int i=0; i<nb_occurences; i++)
    {
        printf("%d ", tab_occurences[i]);
    }
    printf("\n");
     */

    return 0;
}

/* val = 3?
 * tab:
 * [ 10, 5, 3, 25, 3, 8 , 10, 5, 100]
 *
 * resultat
 * [  2, 4 ]
 */

int chercher(int tab[], int nbelt, int val, int resultat[])
{
    int nb_occurences = 0;
    for(int i=0; i<nbelt; i++)
    {
        if(tab[i] == val)
        {
            resultat[nb_occurences] = i;
            nb_occurences++;
        }
    }
    return nb_occurences;
}

/*
 * chaine = "Allo toi"
 * masque "oi"
 * ==> chaine = "***o *oi"
 */

int est_dans_chaine(char recherche, const char chaine[])
{
    for(int i=0; chaine[i]!='\0'; i++)
    {
        if(chaine[i]==recherche)
        {
            return 1;
        }
    }
    return 0;
}

void masquer_chaine(char chaine[], const char masque[])
{
    for(int i=0; chaine[i]!='\0'; i++)
    {
        if( ! est_dans_chaine(chaine[i], masque) )
        {
            chaine[i] = '*'; //PAS "*"
        }
    }
}