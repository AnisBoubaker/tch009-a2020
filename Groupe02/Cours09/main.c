#include <stdio.h>

#define NOMBRE_ETUDIANT 65


/*Programme qui lit 5 notes au clavier
* qui les stocke dans un tableau.
* Après avoir lu, calculer la somme de toutes
* les notes et afficher la somme.
*/

/*
 * Exercice:
 * Écrire un programme qui déclare un tableau de taille 100,
 * qui y stocke les 100 premiers termes de la suite de Fibonacci puis qui les affiche.

 Définition: la suite de Fibonacci se définit récursivement
Fib(0) = 0
Fib(1) = 1
Pour n>1, Fib(n) = Fib(n-2)+Fib(n-1)
*/

//0 1 1 2 3 5 8 13 ....


double moyenne(double tab[], int nb_elts)
{
    int i;
    double moyenne=0;
    for(i=0; i<nb_elts; i++)
    {
        moyenne+=tab[i];
    }
    moyenne /= nb_elts;
    return moyenne;
}

void bidon(int a)
{
    a = a*10;
}

void bidon2(int tab[], int nb_elts)
{
    double toto[100];
    int i;
    for(i=0; i<nb_elts; i++)
    {
        tab[i] = tab[i]*10;
    }
}

/*
 * FONCTION bonnes_notes
 * Reçoit une liste de notes
 * Donner la liste des notes qui sont >=60
 */




int main() {
    /*int mon_tab[50] = {10, 20 , 30};
    int i;

    bidon2(mon_tab, 3);
    for(i=0; i<3; i++)
    {
        printf("Case %d: %d\n", i, mon_tab[i]);
    }*/

    double notes[NOMBRE_ETUDIANT];
    double saisie;
    int nb_notes;
    int i;

    printf("Saisir des notes et terminer par -1:\n");
    nb_notes=0;
    do{
        scanf("%lf", &saisie);
        if(saisie!=-1)
        {
            notes[nb_notes] = saisie;
            nb_notes++;
        }
    } while(saisie!=-1);

    printf("Le nombre de notes: %d\n", nb_notes);

    for(i=0; i<nb_notes; i++)
    {
        printf("Note #%d: %lf\n", i, notes[i]);
    }


    printf("Moyenne des notes: %lf\n",  moyenne(notes, nb_notes)  );






    /*unsigned int fibo[100]={0,1};
    int nb_notes;

    for(nb_notes=2; nb_notes<=50; nb_notes++)
    {
        fibo[nb_notes]= fibo[nb_notes-1]+fibo[nb_notes-2];
    }

    for(nb_notes=0; nb_notes<50; nb_notes++)
    {
        printf("Fibo(%d)=%u\n", nb_notes, fibo[nb_notes]);
    }


    */





    /*int tab[100];
    int toto= 10;



    printf("%d", toto);
    */

    //FAUX - Syntaxiquement Faux
    //notes = {0, 10, 80};
    /*for(nb_notes=0; nb_notes<100; nb_notes++)
    {
        notes[nb_notes] = 1;
    }*/


    /*for(nb_notes=0; nb_notes<5; nb_notes++)
    {
        printf("Saisir la note %d: ", nb_notes+1);
        scanf("%lf", &notes[nb_notes]);
    }

    somme = 0;
    for(nb_notes=0; nb_notes<5; nb_notes++)
    {
        somme += notes[nb_notes];
    }

    printf("La somme des notes: %lf.\n", somme);
    printf("La moyenne: %lf\n", somme/5);
    */
    return 0;
}


//Tableau notes de 5 entiers
/*int notes[5] = {89, 78, 89, 100, 67};
double notes_intra[3] = {100, 67.5, 80};

int note1 = 0;
int note2;
int note3;
int note4;
int note5;
int i;
*/

/*printf("Case 3: %d\n",  notes[3] );
printf("Case 1: %d\n",  notes[1] );

notes[1] = 82;

printf("Case 1: %d\n",  notes[1] );
*/
/*
for(i=0; i<5; i++)
{
printf("Saisir la note %d: \n", i);
scanf("%d", &notes[i] );
}

for(i=0; i<5; i++)
{
printf("%d\t", notes[i]);
}
*/

/*printf("Saisir la note 1: \n");
scanf("%d", &note1);
printf("Saisir la note 2: \n");
scanf("%d", &note2);
printf("Saisir la note 3: \n");
scanf("%d", &note3);
printf("Saisir la note 4: \n");
scanf("%d", &note4);
printf("Saisir la note 5: \n");
scanf("%d", &note5);
*/