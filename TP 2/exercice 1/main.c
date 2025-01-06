#include"header.h"

int main()
{
    node * head = NULL;
    head = ajouter(head);

    affichage(head);

    head=supprimer(head);
    head=supprimer(head);
    head=supprimer(head);

    affichage(head);
    return 0;


}
