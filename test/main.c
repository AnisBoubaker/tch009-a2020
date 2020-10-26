#include <stdio.h>

int main() {
    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<=10; j++)
        {
            printf("%4d", i*j);
        }
        printf("\n");
    }


    /*int nb=0;
    double val = 0 ;
    double t = 0;

    while (nb-1==0 || val >=0 )
    {
        if (val >= 0)
        {
            t +=val;
        }
        else
        {
            nb--;
        }
        printf("Valeur: ");
        scanf("%lf", &val);
        nb++;
    }

    printf("Résultat: %lf\n", t / (nb-1) );

    */
    return 0;
}

/*
 * ---A---
 * --BAB--
 * -CBABC-
 * DCBABCD
 */