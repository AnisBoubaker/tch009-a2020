//
// Created by Anis Boubaker on 2020-10-28.
//

#include "calendrier.h"

int est_bissextile(int annee){
    //On teste la condition d'année bissextile et on retourne le résultat
    if( annee%400==0 || (annee%4==0 && annee%100!=0) )
    {
        return VRAI;
    }
    else
    {
        return FAUX;
    }
}