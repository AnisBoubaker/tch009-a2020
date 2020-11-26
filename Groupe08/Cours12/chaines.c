//
// Created by Anis Boubaker on 2020-11-23.
//

#include "chaines.h"

//const pour dire qu'il est interdit de modifier le tableau chaine dans
//la fonction
int nb_caracteres(const char* chaine)
{
    int nb = 0 ;

    while(chaine[nb]!='\0')
    {
        nb++;
    }

    return nb;
}

int nb_caracteres_alpha(const char chaine[])
{
    int nb_caracteres = 0;
    int i = 0;
    while(chaine[i]!='\0')
    {
        //Majuscules
        if( (chaine[i]>='A' && chaine[i]<='Z') || (chaine[i]>='a' && chaine[i]<='z') )
        {
            nb_caracteres++;
        }
        i++;
    }
    return nb_caracteres;
}