#include"header.h"

void affichage(maillon * head)
{
    if(head == NULL)
        puts("liste est vide !");
    else
    {
        maillon * ptr = head;
        int cmpt = 1;

        while(ptr != NULL)
        {
            //printf("donne num %d : nom est %s, age est %d \n", cmpt, ptr->curr->nom, ptr->curr->age);

            printf("donne num %d : \n", cmpt);
            printf("nom : %s \n", ptr->curr->nom);
            //puts(ptr->curr->nom);
            printf("age : %d \n", ptr->curr->age);

            cmpt++;

            ptr = ptr->suiv;
        }
    }
}

