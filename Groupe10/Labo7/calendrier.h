//
// Created by Anis Boubaker on 2020-11-03.
//

#ifndef LABO7_CALENDRIER_H
#define LABO7_CALENDRIER_H



#define VRAI 1
#define FAUX 0
#define ERREUR -2000000000



/*
 * EST_BISSEXTILE
 * Détermine si une année est bissextile
 * ENTREES:
 * - annee (entier): L'année à vérifier
 * SORTIE : (entier) Valeur vraie si l'année est bissextile, fausse sinon
 */
int est_bissextile(int annee);


/*
Fonction: jour_semaine
Description: Détermine le jour de la semaine d'une date quelconque.
Arguments:
- jour: le jour du mois (entre 1 et 31)
- mois: le mois (entre 1 et 12)
- annee: l'année (non abrégée, ex: 1989)
Retour:
- Entier: Le jour de la semaine exprimé numériquement:  0 pour dimanche, 1 pour lundi, etc.
		  La fonction retourne -1 si un des paramètres est erronné.
Paramètres modifiés:
*/
int jour_semaine(int jour, int mois, int annee);


/*
 * JOUR_MOIS
 * Détermine le nombre de jours, pour un mois d'une année donnés
 * ENTREES:
 * - mois(entier): Le mois dans l'année (1 à 12)
 * - annee(entier): L'année de la date.
 * SORTIE (entier): Le nombre de jours du mois, ou ERREUR si la date est invalide.
 */
int jour_mois(int mois, int annee);


/*
 * EST_DATE_VALIDE
 * Détermine si une date est une date correcte en tenant compte des années bissextiles
 * ENTRES:
 * - jour (entier): Le jour du mois (1 à 31)
 * - mois (entier): Le mois dans l'année (1 a 12)
 * - annee (entier): L'année de la date à vérifier
 * SORTIES (entier): Valeur vraie si la date est une date valide, fausse sinon.
 */
int est_date_valide(int jour, int mois, int annee);


/*
 * COMPARER_DATES
 * Compare deux dates afin de savoir laquelle est antiérieur/postérieure à l'autre.
 * ENTREES:
 * - jour1: Le jour dans le mois de la 1ere date (1-31)
 * - mois1: Le mois dans l'année de la 1ere date (1-12)
 * - annee1: L'année de la 1ere date
 * - jour2: Le jour dans le mois de la 2eme date (1-31)
 * - mois2: Le mois dans l'année de la 2eme date (1-12)
 * - annee2: L'année de la 2eme date
 * SORTIE (entier): Valeur de la comparaison:
 *   0 si les deux dates sont identiques
 *  >0 si la 1ère date est supérieure (postérieure) à la 2ème
 *  <0 si la 1ère date est inférieure (antérieure) à la 2ème
 *  ERREUR si une des deux dates n'est pas valide.
 */
int comparer_dates(int jour1, int mois1, int annee1, int jour2, int mois2, int annee2);

#endif //LABO7_CALENDRIER_H
