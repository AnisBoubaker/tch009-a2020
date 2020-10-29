#include <stdio.h>
#include <stdlib.h>


double approx_pi(int nb_termes);

int main() {

    printf("%lf\n", approx_pi(1000000));

    return EXIT_SUCCESS;
}


double approx_pi(int nb_termes)
{
    int i;
    double resultat;
    int signe;

    resultat = 0;
    signe = 1;
    for(i = 1; i < 2*nb_termes ; i+=2)
    {
        resultat+= signe * (1.0 / i);
        signe *=-1;
    }

    return resultat * 4;
}


/*int nb=0;
    double val;
    double t=0;

    do
    {
        printf("Valeur: ");
        scanf("%lf", &val);

        if(val>=0)
        {
            t+=val; // t = t + val;
            nb++;
        }
    } while(nb==0 || val>=0) ;

    printf("Résultat: %lf\n", t / nb );*/