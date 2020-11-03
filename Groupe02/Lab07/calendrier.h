//
// Created by Anis Boubaker on 2020-11-03.
//

#ifndef LAB07_CALENDRIER_H
#define LAB07_CALENDRIER_H

/**** Constantes de compilation ****/
#define VRAI 1
#define FAUX 0
#define ERREUR -1



/************** Fonctions du module ***********/

/*
 * EST_BISSEXTILE
 * Détermine si une année est bissextile
 * ENTREES:
 * - annee (entier): L'année à vérifier
 * SORTIE : (entier) Valeur vraie si l'année est bissextile, fausse sinon
 */
int est_bisextile(int annee);

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


#endif //LAB07_CALENDRIER_H
