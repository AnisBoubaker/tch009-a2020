#include <stdio.h>

/*
 * Programme qui lit 5 notes au clavier
 * qui les stocke dans un tableau.
 * Après avoir lu, calculer la somme de toutes
 * les notes et afficher la somme.
 *
 */



int main() {
    int notes[3] = {89, 78, 100};
    int note_session_passee[3];
    int i;

    printf("%d\n", notes[1] );

    notes[1] = 65;

    printf("%d\n", notes[1] );

    for(i=0; i<3; i++)
    {
        notes[i] = 0;
    }

    printf("Contenu du tableau: \n");
    for(i=0; i<3; i++)
    {
        printf("%d\n", notes[i]);
    }

    for(i=0; i<3 ; i++)
    {
        note_session_passee[i] = notes[i];
    }

    return 0;
}
