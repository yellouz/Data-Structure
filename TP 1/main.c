#include <stdio.h>
#include <stdlib.h>
#include "header.h"


typedef struct node
{
  int plaque;
  int modele;
  int disponible; //oui == 1 ; non == 0
  struct node * next;
}node;


node * ajouter_taxi(node * start) // ajout au dernier (logique dyal taxyat by jawad elmaroufy)
{
  node * ptr = start; //pour ne pas perdre le head

  if(ptr == NULL) //cas vide
  {
      ptr = malloc(sizeof(node));
      ptr->next = NULL;

      printf("Plaque : \n");
      scanf("%d", &ptr->plaque);
      printf("Modele : \n");
      scanf("%d", &ptr->modele);
      ptr->disponible = 1;

      return ptr;
  }
  else
  {
    while(ptr->next != NULL)
      ptr = ptr->next;

    ptr->next = malloc(sizeof(node));
    ptr = ptr->next;
    ptr->next = NULL;

    printf("Plaque : \n");
    scanf("%d", &ptr->plaque);
    printf("Modele : \n");
    scanf("%d", &ptr->modele);
    ptr->disponible = 1;
  }
  return start;
}


node * supprimer_taxi(node * start)  // supprimer au debut (logique dyal taxyat by jawad elmaroufy)
{
    if(start == NULL)
        puts("raha khawya!!! malk mroblna");
    else if(start->next == NULL) //seul element dans la list by youssef ellouz
        free(start);
    else
    {
        node * tmp = start;
        start = start->next;
        free(tmp);
    }
    return start;
}


void modifier_taxi(node * start, int plaque)
{
    node * ptr = start;
    while(ptr != NULL)
    {
        if(ptr->plaque == plaque)
        {
            printf("nouv modele : \n");
            scanf("%d",&ptr->modele);
            printf("encore disponible : (oui 1 // non 0\n)");
            scanf("%d",&ptr->disponible);
            return;
        }
        ptr = ptr->next;
    }
    puts("wash kadhk Elya!! rah plaque makaynash");
}


void rechercher_taxi(node * start, int plaque)
{
    node * ptr = start;
    while(ptr != NULL)
    {
         if(ptr->plaque == plaque)
         {
             puts("wa rah kaaayn!!!");
             return;
         }
    ptr = ptr->next;
    }
    puts("wash kadhk Elya!! rah plaque makaynash");
}

void afficher_taxi(node * start){
    node*ptr=start;

    printf("les taxi disponibles sont :");

      while(ptr!=NULL){

             if(ptr->disponible==1)
                printf("->taxi de plaque %d\n.",ptr->plaque);
      }




}

int main(void)
{
  node * start = NULL;
  start = ajouter_taxi(start);
  start = supprimer_taxi(start);

  return 0;
}
