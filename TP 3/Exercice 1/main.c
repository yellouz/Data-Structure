#include"header.h"

int main()
{
    node * root = NULL;

    root = insertion(root,4);
    root = insertion(root,7);
    root = insertion(root,3);
    root = insertion(root,10);
    root = insertion(root,-1);
    root = insertion(root,19);
    root = insertion(root,6);

    puts("affichage avant suppression :");
    affichage(root);

    puts("affichage apres suppression de 7:"); // fct de suppression ne travaille pas :( (TO DO!)
    root = suppression(root,7);
    affichage(root);

    return 0;
}

