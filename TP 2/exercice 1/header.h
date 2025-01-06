#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char data;
    struct node * next;
}node;

node * creation(char data);
node * ajouter(node * head);
void affichage(node * head);
node * supprimer(node * head);




#endif // HEADER_H_INCLUDED
