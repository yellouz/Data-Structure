#include"header.h"

node * creation(char data)
{
   node * nouv = malloc(sizeof(node));
   nouv->next = NULL;
   nouv->data = data;
   return nouv;
}

node * ajouter(node * head) //on ajoute au debut et on supprime au debut
{
    puts("donner le texte a ajouter : (taper caractere par caracter et taper 0 pour finir votre mot)");
    char data;
    int cas = 1;

    while(cas)
    {
        scanf("%c", &data);
        node * ptr = creation(data);

        if(head == NULL) // cas pile vide
        {
            head = ptr;
        }
        else
        {
            ptr->next = head;
            head = ptr;
        }

        if(data == '0')
            cas = 0;
    }
    return head;
}
