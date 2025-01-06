#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int id;
    struct node * droit;
    struct node * gauche;
}node;

void affichage(node * root);
node * creer_element(int id);
node * insertion(node * root, int id);
void recherche(node * root, int id);
node * findLargestNode(node * root);
node * suppression(node * root, int id);

#endif // HEADER_H_INCLUDED
