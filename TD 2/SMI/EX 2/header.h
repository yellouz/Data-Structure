#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * before;
    struct node * next;
}node;

node * creer_element(int data);
node * ajout_debut(node * head, int data);
node * ajout_fin(node * head, int data);
node * supprimer_debut(node * head);
node * supprimer_element(node * head, int data);
node * creer_liste(int t[], int TMAX);
node * destruction_liste(node * head);

void affichage(node * head);

#endif // HEADER_H_INCLUDED
