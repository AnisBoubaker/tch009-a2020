//
// Created by Anis Boubaker on 2020-10-28.
//

#ifndef CALENDRIER__H
#define CALENDRIER__H

//Constantes du module
#define VRAI 1
#define FAUX 0
#define ERREUR -1


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
ENTREEES:
- jour: le jour du mois (entre 1 et 31)
- mois: le mois (entre 1 et 12)
- annee: l'année (non abrégée, ex: 1989)
SORTIE:
- Entier: Le jour de la semaine exprimé numériquement:  0 pour dimanche, 1 pour lundi, etc.
		  La fonction retourne ERREUR si un des paramètres est erronné.
*/
int jour_semaine(int jour, int mois, int annee);


/*
 * JOUR_MOIS
 * Détermine le nombre de jours, pour un mois d'une année donnés
 * ENTREES:
 * - mois(entier): Le mois dans l'année (1 à 12)
 * - annee(entier): L'année de la date.
 * SORTIE (entier): Le nombre de jours du mois.
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


#endif //LABORATOIRE7_CALENDRIER_H
