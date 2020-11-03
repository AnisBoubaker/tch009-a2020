//
// Created by Anis Boubaker on 2020-11-03.
//

#include "calendrier.h"


int est_bissextile(int annee)
{
    if(annee%400==0 || (annee%4==0 && annee%100!=0))
    {
        return VRAI;
    }
    else{
        return FAUX;
    }
}


int jour_semaine(int jour, int mois, int annee)
{
    //Déclarations de variables
    int le_jour; //Stocke le jour de la semaine
    int z; //Variable z de la formule de Keith

    //Contrôle d'erreurs
    if (jour < 1 || jour>31)
        return -1;
    if (mois < 1 || mois>12)
        return -1;
    if (mois == 2 && jour > 29)
        return -1;
    if (mois < 3)
    {
        z = annee - 1;
        le_jour = ((23 * mois) / 9 + jour + 4 + annee + (z / 4) - (z / 100) + (z / 400)) % 7;
    }
    else
    {
        z = annee;
        le_jour = ((23 * mois) / 9 + jour + 4 + annee + (z / 4) - (z / 100) + (z / 400) - 2) % 7;
    }
    return le_jour;
}

int jour_mois(int mois, int annee)
{
    int resultat;

    if(mois<1 || mois>12)
    {
        return ERREUR;
    }

    switch(mois)
    {
        case 4:
        case 6:
        case 9:
        case 11:
            resultat = 30;
            break;
        case 2:
            if( est_bissextile(annee) )
            {
                resultat = 29;
            } else{
                resultat = 28;
            }
            break;
        default:
            resultat = 31;

    } //switch
    return resultat;
}

int est_date_valide(int jour, int mois, int annee)
{
    int max_jours;

    max_jours = jour_mois(mois, annee);
    if( max_jours == ERREUR)
    {
        return FAUX;
    }

    if(jour<1 || jour>max_jours)
    {
        return FAUX;
    }

    return VRAI;
}