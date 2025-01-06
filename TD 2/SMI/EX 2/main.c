#include"header.h"

int main() // utiliser la fct main pour tester le code
{
    node * head = NULL;

    int t[]={1,2,3};
    head = creer_liste(&t[0], 3);

    affichage(head);

    head = destruction_liste(head);

    affichage(head);

    return 0;
}
