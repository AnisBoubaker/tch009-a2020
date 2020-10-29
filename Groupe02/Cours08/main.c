



#include <stdio.h>
#include "mathematiques.h"


int main() {

    table_multiplication(10);

    printf("%lf\n", approx_pi(1000000));

    return 0;
}





/*
int nb=0;
    double val=0;
    double t=0;

    do
    {
        printf("Valeur: ");
        scanf("%lf", &val);

        if(val>=0)
        {
            t+=val;
            nb++;
        }

    } while(nb==0 || val>=0) ;

    printf("Résultat: %lf\n", t / nb );
    return 0;
 */