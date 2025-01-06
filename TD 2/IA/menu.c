#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void menu(node * head)
{
    int choix;
    int data;
    int data_recherche;

    ici:
    puts("############################################");
    puts("Menu :");
    puts("1. Insertion au debut");
    puts("2. Insertion a la fin");
    puts("3. Insertion avant un element");
    puts("4. Insertion apres un element");
    puts("5. Suppression d’un element donne");
    puts("6. Suppression avant un element");
    puts("7. Suppression apres un element");
    puts("8. Affichage de la liste");
    puts("9. Calcul de la taille de la liste");
    puts("10. Quitter");
    puts("############################################");

    scanf("%d",&choix);

    if(choix > 10 || choix < 1)
        goto ici;

    switch(choix)
    {
        case 1 :
            {
                puts("veuiller saisir data a ajouter : ");
                scanf("%d", &data);
                insertion_debut(head, data);
            };break;
        case 2 :
            {
                puts("veuiller saisir data a ajouter : ");
                scanf("%d", &data);
                insertion_fin(head, data);
            };break;
        case 3 :
            {
                puts("veuiller saisir data recherchee : ");
                scanf("%d", &data_recherche);
                puts("veuillez saisir data a ajouter : ");
                scanf("%d", &data);
                insertion_avant(head, data, data_recherche);
            };break;
        case 4 :
            {
                puts("veuiller saisir data recherchee : ");
                scanf("%d", &data_recherche);
                puts("veuillez saisir data a ajouter : ");
                scanf("%d", &data);
                insertion_apres(head, data, data_recherche);
            };break;
        case 5 :
            {
                puts("veuiller saisir data a supprimer : ");
                scanf("%d", &data);
                supprimer_element(head, data);
            };break;
        case 6 :
            {
                puts("veuiller saisir data a supprimer son avant : ");
                scanf("%d", &data);
                supprimer_avant(head, data);
            };break;
        case 7 :
            {
                puts("veuiller saisir data a supprimer son apres : ");
                scanf("%d", &data);
                supprimer_apres(head, data);
            };break;
        case 8 : affichage(head);break;
        case 9 : taille(head);break;
        case 10 : exit (0);
    }


}
