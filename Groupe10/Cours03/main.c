#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double abscisse, ordonnee;
    int cadran;

    printf("Entrez l'abscisse: ");
    scanf("%lf", &abscisse);

    printf("Entrez l'ordonnée: ");
    scanf("%lf", &ordonnee);

    if(abscisse<0 && ordonnee>0)
    {
        cadran = 1;
    }
    else if(abscisse>0 && ordonnee>0)
    {
        cadran = 2;
    }
    else if(abscisse>0 && ordonnee<0)
    {
        cadran = 3;
    }
    else if(abscisse<0 && ordonnee<0)
    {
        cadran = 4;
    }
    else
    {
        cadran = 0;
    }

    if(cadran)
    {
        printf("Vous êtes dans le cadran %d\n", cadran);
    }
    else
    {
        printf("Vous êtes sur l'axe!\n");
    }


    
    /*int x = 2;

    if (x < 25 &&  x > 5)
    {
        printf("x est dans l'intervalle ]5,25[\n");
    }
    else
    {
        printf("x n'est pas dans l'intervalle!\n");
    }

    */

    /*
    int x ;

    printf("Saisir un entier: ");
    scanf("%d", &x);

    if( x )
    {
        printf("La condition est vraie!\n");
    }
    else
    {
        printf("La condition est fausse!\n");
    }
          */
    

    /*int x ;


    x = 2 > 5;

    printf("Valeur de x: %d", x);
      */



    /*int choix; //Choix de l'usager

    printf("1- Créer un nouveau document\n");
    printf("2- Ouvrir un document existant\n");
    printf("3- Quitter\n");
    printf("Votre choix: ");
    scanf("%d", &choix);

    switch(choix)
    {
        case 1:
            printf("D'accord, on crée un nouveau document!\n");
            break;
        case 2:
            printf("Nous ouvrons un document existant!\n");
            break;
        case 3:
            printf("Au revoir!\n");
            break;
        case 4:
        case 5:
            printf("Vous avez saisi 4 ou 5, mais ce n'est pas permis!\n");
            break;
        default:
            printf("Mauvaise touche!");
    }
    */

    //Version sans le switch
    /*if(choix == 1)
    {
        printf("D'accord, on crée un nouveau document!\n");
    }
    else if(choix == 2)
    {
        printf("Nous ouvrons un document existant!\n")   ;
    }
    else if(choix == 3)
    {
        printf("Au revoir!\n");
    }
    else
    {
        printf("Mauvaise touche!\n");
    }    */

    /*int val1, val2, val3; //Trois valeurs saisies
    int max;

    //Exercice: le maximum parmi 3.
    printf("Valeur1: ");
    scanf("%d", &val1);

    printf("Valeur2: ");
    scanf("%d", &val2);

    printf("Valeur3: ");
    scanf("%d", &val3);

    // val1 = 50, val2 = 100 val3 = 20    max = 100
    if(val1>val2)
    {
        max = val1;
    }
    else
    {
        max = val2;
    }
    if(val3 > max)
    {
        max = val3;
    }



    if(val1 > val2)
    {
        if(val1 > val3)
        {
            max = val1;
        }
        else
        {
            max = val3;
        }
    }
    else    // uniquement si val2 > val1
    {
         if(val2 > val3)
         {
            max = val2;
         }
         else
         {
             max = val3;
         }
    }

    printf("Le maximum parmi %d, %d et %d est : %d\n", val1, val2, val3, max);

    */



    /*int x;

    x = 25;

    if(x > 0) //Jamais de ; après if!
    {
        printf("La valeur de x est positive!\n");
        printf("L'opposé de x est : %d", -x);
    }*/

    /*{
        printf("La valeur de x est positive!\n");
        x = -x ;
        printf("L'opposé de x est: %d", x);
    }*/








    /*
    //Coreection du laboratoire noté #2
    unsigned int valeur; //Valeur saisie par l'usager
    unsigned int chiffre;  //Ce qui remplacera le 3e chiffre
    unsigned int chiffre_supprime; //Le chiffre a extraire du nombre
    unsigned int resultat;
    unsigned int quotient; //Stocke le résultat des divisions /10

    printf("Saisir une valeur: ");
    scanf("%d", &valeur);

    printf("Saisir le nouveau 3e chiffre: ");
    scanf("%d", &chiffre);

    //On isole le chiffre à supprimer
    quotient = valeur / 100;
    chiffre_supprime = quotient % 10;

    //On remplace le chiffre par le nouveau
    resultat = valeur - (chiffre_supprime*100);
    resultat = resultat + (chiffre * 100);

    printf("Résultat: %d", resultat);
    */
    return EXIT_SUCCESS;
}
