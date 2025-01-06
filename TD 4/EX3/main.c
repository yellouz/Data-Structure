#include"header.h"

int main()
{
    maillon * head = NULL;

    char * nom = "mee";
    int age = 20;
    
    head = insertion_debut(head, 10, "bob");
    head = insertion_debut(head, 9, "kill");
    head = insertion_debut(head, 18, "dd");
    head = insertion_fin(head, 5, "me");
    head = insertion_fin(head,age,nom);
    head = insertion_avant(head, 20, "monname", "mee");

    affichage(head);



    return 0;
}

