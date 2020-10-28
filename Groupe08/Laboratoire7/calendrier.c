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

int jour_semaine(int jour, int mois, int annee){
    int jour_semaine; //Stocke le jour de la semaine
    int z; //Variable z de la formule de Keith


    if (mois < 3)
    {
        z = annee - 1;
        jour_semaine = ((23 * mois) / 9 + jour + 4 + annee + (z / 4) - (z / 100) + (z / 400)) % 7;
    }
    else
    {
        z = annee;
        jour_semaine = ((23 * mois) / 9 + jour + 4 + annee + (z / 4) - (z / 100) + (z / 400) - 2) % 7;
    }
    return jour_semaine;
}

int jour_mois(int mois, int annee)
{
    int nb_jours;

    if(mois<1 || mois>12)
    {
        return ERREUR;
    }

    //nb_jours = 31;
    switch(mois) {
        case 4:
        case 6:
        case 9:
        case 11:
            nb_jours = 30;
            break;
        case 2:
            if (est_bissextile(annee)) {
                nb_jours = 29;
            } else {
                nb_jours = 28;
            }
            break;
        default:
            nb_jours = 31;
    }

    return nb_jours;
}

int est_date_valide(int jour, int mois, int annee)
{
    int nb_jours;

    if(mois<1 || mois>12)
    {
        return FAUX;
    }

    nb_jours = jour_mois(mois, annee);
    if(jour<1 || jour>nb_jours)
    {
        return FAUX;
    }
    return VRAI;
}


int comparer_dates(int jour1, int mois1, int annee1, int jour2, int mois2, int annee2)
{
    if( !est_date_valide(jour1, mois1, annee1) || !est_date_valide(jour2, mois2, annee2))
    {
        return ERREUR;
    }

    if(annee1!=annee2)
    {
        return annee1-annee2;
    }

    if(mois1!=mois2)
    {
        return mois1-mois2;
    }

    return jour1 - jour2;

}