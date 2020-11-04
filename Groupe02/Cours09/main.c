#include <stdio.h>

/*Programme qui lit 5 notes au clavier
* qui les stocke dans un tableau.
* Après avoir lu, calculer la somme de toutes
* les notes et afficher la somme.
*/




int main() {

    //Tableau notes de 5 entiers
    int notes[5] = {89, 78, 89, 100, 67};
    double notes_intra[3] = {100, 67.5, 80};

    int note1 = 0;
    int note2;
    int note3;
    int note4;
    int note5;
    int i;


    /*printf("Case 3: %d\n",  notes[3] );
    printf("Case 1: %d\n",  notes[1] );

    notes[1] = 82;

    printf("Case 1: %d\n",  notes[1] );
    */

    for(i=0; i<5; i++)
    {
        printf("Saisir la note %d: \n", i);
        scanf("%d", &notes[i] );
    }

    for(i=0; i<5; i++)
    {
        printf("%d\t", notes[i]);
    }


    /*printf("Saisir la note 1: \n");
    scanf("%d", &note1);
    printf("Saisir la note 2: \n");
    scanf("%d", &note2);
    printf("Saisir la note 3: \n");
    scanf("%d", &note3);
    printf("Saisir la note 4: \n");
    scanf("%d", &note4);
    printf("Saisir la note 5: \n");
    scanf("%d", &note5);
    */
    return 0;
}
