#include <stdio.h>

int main() {
    int dernier_terme;
    int compteur;
    double somme;

    printf("Dernier terme? :");
    scanf("%d", &dernier_terme);

    compteur = 1;
    somme = 0;
    while(compteur <= dernier_terme)
    {
        somme = somme + 1.0/compteur;
        compteur ++;
    }

    printf("Somme des termes: %lf\n", somme);
}
