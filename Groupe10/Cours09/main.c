#include <stdio.h>

#define NOMBRE_ETUDIANTS_MAX 40
#define NOMBRE_TERMES_MAX 20


/*
Écrire un programme qui déclare un tableau de taille 40,
 qui y stocke les 40 premiers termes de la suite de Fibonacci
 puis qui les affiche.
Définition: la suite de Fibonacci se définit récursivement
* Fib(0) = 0
* Fib(1) = 1
* Pour n>1, Fib(n) = Fib(n-2)+Fib(n-1)
 *
 *
 *  0  1   1   2   3   5    8   13
 *
 *
 */


double moyenne(int tab_valeurs[], int nb_valeurs)
{
    int i;
    double moyenne=0;

    for(i=0;i<nb_valeurs; i++)
    {
        moyenne+=tab_valeurs[i];
    }

    moyenne = moyenne / nb_valeurs;

    return moyenne;
}


void bidon(int a)
{
    a = a * 10;
}
void bidon2(int tab[], int nb_elts)
{
    int resultat[100];
    int i;
    for(i=0; i<nb_elts; i++)
    {
        tab[i] = tab[i]*10;
    }
}


void valeures_paires(int tab[], int nb_elts, int resultat[])
{
    //Remplir le tableau resultat sans laisse de trous au début ou au milieu
    // [ 2   |   |  | 34  |   ]
}



/*
 * Une fonction qui reçoit un tableau.
 * Elle "retourne" la liste des valeurs paires.
 */


int main() {
    int fibo[NOMBRE_TERMES_MAX] = {0, 1};
   int mon_tab[5] = {45, 60, 70, 80, 100};
   int fibo_pairs[NOMBRE_TERMES_MAX];
   int i;
   int nb_termes;
   double moy_fibo;

   printf("Nombre de termes à calculer? (<%d)", NOMBRE_TERMES_MAX);
   scanf("%d", &nb_termes);

   if(nb_termes>NOMBRE_TERMES_MAX)
   {
       nb_termes = NOMBRE_TERMES_MAX;
   }


   fibo[0]=0;
   fibo[1]=1;
   for(i=2; i<nb_termes; i++)
   {
       fibo[i] = fibo[i-1]+fibo[i-2];
   }

   for(i=0; i<nb_termes; i++)
   {
       printf("Fibo(%d) = %d\n", i, fibo[i]);
   }

   moy_fibo = moyenne(fibo, nb_termes);
   printf("La moyenne des %d termes de la suite de Fibonacci: %lf\n", nb_termes, moy_fibo);

   valeures_paires(fibo, nb_termes, fibo_pairs);

   /*
    * Afficher les valeurs paires
    */

   return 0;
}

/*
int un_tableau[]= {10, 15, 20, 30};
int i;

bidon2(un_tableau, 4);
for(i=0; i<4; i++)
{
printf("Case %d: %d\n", i, un_tableau[i]);
}
*/

/*int toto = 30;

bidon(toto);
printf("%d", toto);*/


/*
* Programme qui lit 5 notes au clavier
* qui les stocke dans un tableau.
* Après avoir lu, calculer la moyenne de toutes
* les notes et afficher la moyenne.
*
*/
/*double notes[NOMBRE_ETUDIANTS_MAX];
int nb_etudiants;
double moyenne;
double saisie;
int i;

printf("Saisir les notes (-1 pour terminer)\n");
nb_etudiants = 0;
do{
    printf("Note: ");
    scanf("%lf", &saisie);
    if(saisie!=-1)
    {
        notes[nb_etudiants] = saisie;
        nb_etudiants++;
    }
} while(saisie != -1 && nb_etudiants < NOMBRE_ETUDIANTS_MAX);*/


/*for(i=0; i<NOMBRE_ETUDIANTS_MAX; i++)
{
    printf("Note %d: ", i+1);
    scanf("%lf", &notes[i]);
}*/

/*moyenne = 0;
for(i=0; i < nb_etudiants ; i++)
{
    moyenne+=notes[i];
}
moyenne /= nb_etudiants;

printf("Moyenne: %lf\n", moyenne);*/




/*int a = 10;
    int i;
    int tab[50] = { 0 };
    //Déclarer un tableau de 35 éléments de type double
    double notes[NOMBRE_ETUDIANTS_MAX] = {89, 78, 0, 56, 100, 45};

    for(i=0; i<50; i++)
    {
        tab[i] = 1;
    }



    printf("Contenu de la case ayant pour indice 2: %lf\n", notes[2]);
    notes[2] = 89;

    //notes[-1] = 25;


    //for(i=0; i<=34; i++)
    for(i=0; i<NOMBRE_ETUDIANTS_MAX+5; i++)
    {
        printf("Contenu de la case ayant pour indice %d: %.2lf\n", i, notes[i]);
    }




    */


/*
 * double note1;
    double note2;
    double note3;
    double note4;
    double note5;
    double note6;
    double note7;
    double note8;
    double note9;
    int i;

    for(i=1; i<=9; i++)
    {
        printf("Saisir la note %d: ", i);
        scanf("%lf", &note1);
    }


    printf("Saisir la note 2: ");
    scanf("%lf", &note2);

    printf("Saisir la note 3: ");
    scanf("%lf", &note3);

    printf("Saisir la note 4: ");
    scanf("%lf", &note4);
 */