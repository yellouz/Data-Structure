#include"header.h"

int main()
{
    //utiliser la fonction main pour tester le code
    puts("test de push :");
    push(4);
    push(5);
    push(7);
    push(10);
    push(6);
    push(6);
    push(6);
    push(6);
    push(6);
    push(6);
    affichage();

    peek();

    max_min_pile();

    somme_pile();

    puts("test vider :");
    vider();
    affichage();


    return 0;
}
