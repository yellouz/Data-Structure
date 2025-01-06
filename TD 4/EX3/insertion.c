#include"header.h"

maillon * creer_element(int age, char * nom)
{
    maillon * nouv = malloc(sizeof(maillon));
    nouv->prec = NULL;
    nouv->suiv = NULL;
    nouv->curr = malloc(sizeof(donnee));

    nouv->curr->age = age;
    nouv->curr->nom = nom;

    return nouv;
}


maillon * insertion_debut(maillon * head, int age, char * nom)
{
    maillon * nouv = creer_element(age, nom);

    if(head == NULL)
        head = nouv;
    else
    {
        nouv->suiv = head;
        head->prec = nouv;
        
        head = nouv;
    }
    return head;
}


maillon * insertion_fin(maillon * head, int age, char * nom)
{
    maillon * nouv = creer_element(age, nom);

    if(head == NULL)
        head = nouv;
    else
    {
        // on parcoure jusqu'a la fin de la liste

        maillon * ptr = head;

        while (ptr->suiv != NULL)
            ptr = ptr->suiv;

        ptr->suiv = nouv;
        nouv->prec = ptr;
    }
    return head;
}


maillon * insertion_avant(maillon * head, int age, char * nom, char * target)
{
    maillon * nouv = creer_element(age, nom);

    if(head == NULL)
        puts("liste est vide !");
    else
    {
        maillon * ptr = head;

        while((ptr != NULL) && (ptr->curr->nom != target))
            ptr = ptr->suiv;

        if(ptr == NULL)
            puts("target not found !");
        else
        {
            maillon * preptr = ptr->prec;

            preptr->suiv = nouv;
            ptr->prec = nouv;

            nouv->prec = preptr;
            nouv->suiv = ptr;
        }
    }
    return head;
}