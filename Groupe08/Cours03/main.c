#include <stdio.h>
#include <stdlib.h>

int main() {

    double x, y; //Coordonnées saisies par l'usager
    int cadran;

    printf("Saisir l'abscisse: ");
    scanf("%lf", &x);

    printf("Saisir l'ordonnee: ");
    scanf("%lf", &y);

    if(x>0 && y>0)
    {
        cadran = 1;
    }
    else if (x>0 && y<0)
    {
        cadran = 2;
    }
    else if(x<0 && y<0)
    {
        cadran = 3;
    }
    else if(x<0 && y>0)
    {
        cadran = 4;
    }
    else
    {
        cadran = 0;
    }

    if(cadran)
    {
        printf("Vous etes dans le cadran %d.\n", cadran);
    }
    else
    {
        printf("Vous etes sur un axe!\n");
    }




/*
    int x = 0;


    if( x == 0 )
    {
        printf("c'est vrai!!");
    }
    printf("x contient: %d\n", x);


*/











    /*
    int choix;

    printf("Que voulez-vous faire?\n");
    printf("1- Nouveau document\n");
    printf("2- Ouvrir un document\n");
    printf("3- Quitter le programme\n");
    scanf("%d", &choix);


    switch(choix)
    {
        case 1:
            printf("Bravo, vous avez décidé de créer un document.\n");
            break;
        case 22:
            printf("Bravo, vous avez décidé d'ouvrir un document.\n");
            break;
        case 3:
            printf("Au revoir!\n");
            break;
        default:
            printf("Mauvaise touche!");
    }



    /*
    if(choix == 1)
    {
        printf("Bravo, vous avez décidé de créer un document.");
    }
    else if(choix ==2)
    {
        printf("Bravo, vous avez décidé d'ouvrir un document.");
    }
    else if(choix==3)
    {
        printf("Au revoir!\n");
    }
    else
    {
        printf("Mauvause touche!");
    }
    */











    /*int nb1, nb2, nb3; //Valeurs saisies par l'usager
    int max; //Valeur maximale parmi les 3 saisies

    printf("Saisir le 1er nombre: ");
    scanf("%d", &nb1);

    printf("Saisir le 2eme nombre: ");
    scanf("%d", &nb2);

    printf("Saisir le 3eme nombre: ");
    scanf("%d", &nb3);


    if(nb1>nb2)
    {
        max = nb1;
    }
    else
    {
        max = nb2;
    }
    if(nb3>max)
    {
        max = nb3;
    }







    if(nb1 > nb2)
    {
        if(nb1>nb3)
        {
            max = nb1;
        }
        else
        {
            max = nb3;
        }
    }
    else if(nb2>nb3)
    {
        max = nb2;
    }
    else if(nb1==nb2)
    {
        max = nb3;
    }
    else
    {

    }

    printf("La valeur maximale est: %d.", max);

    */














    /*int x;

    printf("Saisir une valeur: ");
    scanf("%d", &x);

    if(x>0)
    {
        printf("Vous avez saisi une valeur positive!\n");
        printf("Merci pour votre participation!\n");
    }
    else
    {
        printf("Vous avez saisi une valeur négative ou nulle.\n");
    }
    */






    /*if(x>0)
    {
        printf("Vous avez saisi une valeur positive!\n");
        x = -x;
        printf("L'opposé de la valeur saisie est: %d\n", x);
    }*/

    return EXIT_SUCCESS;
}
