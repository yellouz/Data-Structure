#include"header.h"

node * creer_liste(int t[], int TMAX) // on cree une liste a partir d'un tableau donnee
{                                     // head = creer_liste(&t[0], nbr_elements); c'est ca comment appeler la fct
    node * head = NULL;
    int i = 0;

    while(i < TMAX)
    {
        head = ajout_fin(head, t[i]);
        i++;
    }
    return head;
}


node * destruction_liste(node * head)
{
    if(head == NULL)
        puts("liste est vide!");
    else
    {
        while(head != NULL)
            head = supprimer_debut(head);
    }
    return head;
}
