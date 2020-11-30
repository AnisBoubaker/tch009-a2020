#include <stdio.h>
#include <string.h>

#define TAILLE_MAX_CH 100

//Est-ce que un caractère c se trouve dans la chaine
//ch?
int est_dans_chaine(char c, const char ch[]);

void masquer_chaine(char ch1[], const char ch2[]);


int main() {
    char phrase[TAILLE_MAX_CH];
    char masque[TAILLE_MAX_CH];

    //phrase = "Bonjour tout le monde!";

    strcpy(phrase, "Bonjour tout le monde!");
    strcpy(masque, "Bboim .,!?");

    masquer_chaine(phrase, masque);

    printf("Phrase masquée: %s\n", phrase);

    return 0;
}

int est_dans_chaine(char c, const char ch[])
{
    for(int i=0; ch[i]!='\0'; i++)
    {
        if(ch[i]==c)
        {
            return 1;
        }
    }
    return 0;
}


void masquer_chaine(char ch1[], const char ch2[])
{
    for(int i=0; ch1[i]!='\0'; i++)
    {
        //if( ! est_dans_chaine(ch1[i], ch2) )
        if( est_dans_chaine(ch1[i], ch2) == 0 )
        {
            ch1[i] = '*';
        }
    }
}