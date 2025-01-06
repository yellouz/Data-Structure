#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

typedef struct node
{
    int data;
    struct node * next;
}node;

void insertion_debut(node * ptr, int data);
void insertion_fin(node * ptr, int data);
void insertion_avant(node * ptr, int data, int data_recherche);
void insertion_apres(node * ptr, int data, int data_recherche);
void supprimer_element(node * ptr, int data);
void supprimer_avant(node * ptr, int data);
void supprimer_apres(node * ptr, int data);
void affichage(node * ptr);
void taille(node * ptr);
void menu(node * ptr);

#endif // HEADER_H_INCLUDED
