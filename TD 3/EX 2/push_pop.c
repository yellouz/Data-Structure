#include"header.h"

node * head = NULL; // declaration et initialisation de la variable globale head


node * creer_element(int data)
{
    node * tmp = malloc(sizeof(node));
    tmp->data = data;
    tmp->next = NULL;

    return tmp;
}


void push(int data) // ajout au debut
{
    node * tmp = creer_element(data);

    if(head == NULL)
        head = tmp;
    else
    {
        tmp->next = head; // le nouveau element va pointer sur le premier element
        head = tmp; // maintenant notre nouveau element a devenu le premier element
    }
}


void pop() // supprimer au debut 
{
    if(head == NULL)
        puts("pile est vide!");
    else
    {
        node * tmp = head;
        head = head->next;
        free(tmp);
    }
}


