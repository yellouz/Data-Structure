#include"header.h"

int main()
{
    puts("-----------------------------");
    
    puts("test de push :");
    push(5);
    push(6);
    push(5);
    push(10);
    affichage();
    peek();

    max_min();

    somme();

    puts("test vider :");
    vider();
    affichage();

    return 0;
}