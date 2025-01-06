#include"header.h"

void affichage()
{
    puts("affichage : ");

    if(top == -1)
        puts("pile est vide!");
    else
    {
        int cmpt = 1;

        for(int i = top; i != -1; i--, cmpt++) // j'ai utilise la var i pour ne pas perdre la valeur du top, la condition si i == -1 ca veut dire qu'on a parcouru tout le tableau
            printf("l'element num %d est : %d \n",cmpt,t[i]);
    }
}


void peek()
{
    int taille = top + 1; // car on commence les indices par 0
    printf("la pile contient %d elements pout le moment \n",taille);
}
