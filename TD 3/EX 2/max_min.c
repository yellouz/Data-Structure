#include"header.h"

int max;
int min;

void max_min()
{
    if (head == NULL)
        puts("pile est vide!");
    else
    {
        max = head->data;
        min = head->data;
        node * ptr = head;

        while(ptr != NULL)
        {
            if(max < ptr->data)
                max = ptr->data;

            if(min > ptr->data)
                min = ptr->data;
            
            ptr = ptr->next;
        }
        printf("max = %d et min = %d \n",max,min);
    }
}