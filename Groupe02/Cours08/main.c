#include <stdio.h>

int main() {
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
}
