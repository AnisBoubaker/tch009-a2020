#include <stdio.h>


/*
 * Programme qui calcule le nième des termes de la suite
 * de Fibonacci.
 *
 * f(0) = 0
 * f(1) = 1
 *
 * Pour n>=2,
 * f(n) = f(n-2) + f(n-1)
 *
 * f(2) = 1
 * f(3) = f(1)+f(2) = 2
 * f(4) = f(3)+f(2) = 3
 *
 *
 *Le nieme terme?
 * L'utilisateur saisit n (on suppose entre 0 et 100)
 */


double moyenne(double notes[], int taille);


/*
 * Programme qui lit 5 notes au clavier
 * qui les stocke dans un tableau.
 * Après avoir lu, calculer la somme de toutes
 * les notes et afficher la somme.
 *
 */

#define NOMBRE_ETUDIANTS_MAX 20


void bidon(int a)
{
    a = a*10;
}

void bidon2(int a[], int nb_elts)
{
    int i;
    for(i=0; i<nb_elts; i++)
    {
        a[i] = a[i] * 10;
    }
}

//
// mettre_a_zero
/*
 * Mettre à zéro toutes les notes qui sont inférieures à 50
 */
void mettre_a_zero(double notes[], int nb_notes)
{
    int i;
    for(i=0; i<nb_notes; i++)
    {
        if(notes[i]<50)
        {
            notes[i] = 0;
        }
    }
}

int valeurs_positives(int tab[], int nb_elts, int resultats[])
{
    //{10, -89, 390, -2, 10, 100, -4, 18, 25}
    // 0    1    2    3   4   5    6   7   8
    //Resultats
    // 10,  390 , ,
    // 0    1    2    3   4   5    6   7   8
    int i;
    int j=0;
    for(i=0; i<nb_elts; i++)
    {
        if(tab[i]>=0)
        {
            resultats[j] = tab[i];
            j++;
        }
    }
    return j;
}

int main() {
    int un_tab[] = {10, -89, 390, -2, 10, 100, -4, 18, 25};
    int val_pos[100];
    int i;
    int nb_positifs;

    nb_positifs = valeurs_positives(un_tab, 9, val_pos);

    for(i=0; i<nb_positifs; i++)
    {
        printf("Valeur positive: %d\n", val_pos[i]);
    }





    /*double notes[NOMBRE_ETUDIANTS_MAX]; //Initialiser un tableau à des 0 partout
    double mon_tab[] = {10, 20, 30};
    int i;
    double saisie;
    int nb_notes; //Taille effective du tableau

    printf("Saisir les notes, -1 pour terminer\n");
    nb_notes=0;
    do{
        printf("Saisir la note de l'étudiant: ");
        scanf("%lf", &saisie);
        if(saisie!=-1)
        {
            notes[nb_notes] = saisie;
            nb_notes++;
        }
    } while(saisie!=-1);


    printf("La moyenne: %lf\n", moyenne(notes, nb_notes));

    mettre_a_zero(notes, nb_notes);

    for(i=0; i<nb_notes; i++)
    {
        printf("Note #%d: %lf\n", i, notes[i]);
    }*/

    /*
     int mon_tab[] = {10, 11, 12, 13};
    int i;
     int x = 20;

    bidon(x);

    printf("x vaut: %d", x);*/


    /*int terme_a_calculer;
    int fibo[101]={0,1};
    int i;

    printf("Saisir le terme que vous souhaitez: ");
    scanf("%d", &terme_a_calculer);

    fibo[0] = 0;
    fibo[1] = 1;
    for(i=2; i<=terme_a_calculer; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    printf("Valeur du %dieme terme: %d\n", terme_a_calculer, fibo[terme_a_calculer]);

    for(i=0; i<=terme_a_calculer; i++)
    {
        printf("Terme %d: %d\n", i, fibo[i]);
    }*/


    /*double notes[20]; //Initialiser un tableau à des 0 partout
    int mon_tab[] = {10, 20, 30};
    int i;
    double saisie;
    double moyenne;
    int nb_notes; //Taille effective du tableau

    printf("Saisir les notes, -1 pour terminer\n");
    nb_notes=0;
    do{
        printf("Saisir la note de l'étudiant: ");
        scanf("%lf", &saisie);
        if(saisie!=-1)
        {
            notes[nb_notes] = saisie;
            nb_notes++;
        }
    } while(saisie!=-1);

    moyenne = 0;
    for(i=0; i<nb_notes; i++)
    {
        moyenne+=notes[i];
    }
    moyenne /= nb_notes;

    printf("La moyenne: %lf\n", moyenne);
     */

    /*
    for(i=0; i<20; i++)
    {
        notes[i] = 10;
    }

    for(i=0; i<20; i++)
    {
        printf("Note à l'indice: %d: %lf\n", i, notes[i]);
    }*/


    /*
    double notes[5];
    double somme;
    int i;

    //for(i=0; i<=4; i++)
    for(i=0; i<5; i++)
    {
        printf("Saisir la note de l'étudiant-e %d: ", i+1);
        scanf("%lf", &notes[i]);
    }

    //On fait la somme:
    somme = 0;
    for(i=0; i<5; i++)
    {
        somme+= notes[i];
    }

    printf("La somme des notes est: %lf\n", somme);
    */
    return 0;
}


double moyenne(double notes[], int taille)
{
    double resultat;
    int i;

    for(i=0; i<taille; i++)
    {
        resultat+= notes[i];
    }
    resultat = resultat  / taille;
    return resultat;
}