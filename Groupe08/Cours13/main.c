#include <stdio.h>
#include <string.h>

#define TAILLE_MAX_CH 100
#define NB_VALS_MAX 20
#define MAX_COLS 100

//Est-ce que un caractère c se trouve dans la chaine
//ch?
int est_dans_chaine(char c, const char ch[]);

void masquer_chaine(char ch1[], const char ch2[]);


int chercher(int tab[], int nbelt, int val, int resultat[])
{
    // tab: [ 10, 4, 1, 6, 8, 1, 15]
    //resultat:  [ 2 | 5  |    |  |   ]
    //Supposons val = 1
    // nombre_de_fois_trouve = 2
    int nombre_de_fois_trouve = 0;
    for(int i=0; i<nbelt; i++)
    {
        if(tab[i] == val)
        {
            resultat[ nombre_de_fois_trouve ] = i;
            nombre_de_fois_trouve++;
        }
    }
    return nombre_de_fois_trouve;
}

void dons_journaliers(double tab_dons[][MAX_COLS], int nb_jours, double resultat[])
{

}

int main() {
    int tableau[NB_VALS_MAX] = {1,8,2,1,5,3,8,1,2};
    int occurences[NB_VALS_MAX];
    int nb_occurences;

    nb_occurences = chercher(tableau, 9, 1, occurences);

    if(nb_occurences>0) {
        printf("La valeur se trouve aux indices suivants:\n");

        for (int i = 0; i < nb_occurences; i++) {
            printf("%d\n", occurences[i]);
        }
    } else {
        printf("La valeur ne se trouve pas dans le tableau!");
    }


    /*char phrase[TAILLE_MAX_CH];
    char masque[TAILLE_MAX_CH];

    //phrase = "Bonjour tout le monde!";

    strcpy(phrase, "Bonjour tout le monde!");
    strcpy(masque, "Bboim .,!?");

    masquer_chaine(phrase, masque);

    printf("Phrase masquée: %s\n", phrase);
    */
    return 0;
}

int est_dans_chaine(char c, const char ch[])
{
    for(int i=0; ch[i]!='\0'; i++)
    {
        if(ch[i]==c)
        {
            return 1;
        }
    }
    return 0;
}


void masquer_chaine(char ch1[], const char ch2[])
{
    for(int i=0; ch1[i]!='\0'; i++)
    {
        //if( ! est_dans_chaine(ch1[i], ch2) )
        if( est_dans_chaine(ch1[i], ch2) == 0 )
        {
            ch1[i] = '*';
        }
    }
}