#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    node * head = NULL;
    head = insertion();
    
    menu(head);

    return 0;
}
