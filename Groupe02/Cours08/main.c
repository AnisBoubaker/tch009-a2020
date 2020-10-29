#include <stdio.h>

int main() {
    int nb=0;
    double val=0;
    double t=0;

    while(nb-1==0 || val>=0)
    {
        if(val>=0)
        {
            t+=val;
        }
        else{
            nb--;
        }
        printf("Valeur: ");
        scanf("%lf", &val);
        nb++;
    }
    printf("Résultat: %lf\n", t / (nb-1) );
    return 0;
}
