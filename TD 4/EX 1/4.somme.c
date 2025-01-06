#include"header.h"

void somme_pile()
{
    if(top == -1)
        puts("pile est vide!");
    else
    {
        int i = top;
        int somme = 0;

        while(i != -1)
        {
            somme = somme + t[i];
            i--;
        }
        printf("la sommation des elements de la pile est egale a : %d \n",somme);
    }
}