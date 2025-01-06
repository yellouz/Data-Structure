#include"header.h"

int max_pile = 0;
int min_pile = 0; 

// declaration et initialisation des variables globaux

void max_min_pile()
{
    if(top == -1)
        puts("pile est vide");
    else
    {
        max_pile = t[top];
        min_pile = t[top];

        // on suppose au debut que l'element en top est le max et le min

        for(int i = top; i != -1; i--)
        {
            if(max_pile < t[i])
                max_pile = t[i];

            if(min_pile > t[i])
                min_pile = t[i];
        }
        printf("max = %d et min = %d \n",max_pile,min_pile);
    }
}
