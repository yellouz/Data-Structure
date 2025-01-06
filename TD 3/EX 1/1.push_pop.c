#include"header.h"

 int top = -1;
 int t[TMAX];

// si vous declarez un variable extern il faut la declarer dans un fichier .c donc j'ai les declarer et initialiser ici

void push(int data) // ajout_debut
{
    if(top == TMAX-1) // pile est plein
        puts("pile est plein!");
    else
    {
        top++;
        t[top] = data;
    }
}


void pop() // supprimer_debut
{
    if(top == -1)
        puts("pile est vide!");
    else
        top--;
}
