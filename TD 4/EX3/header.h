#include<stdio.h>
#include<stdlib.h>

typedef struct donne
{ 
    char *nom; 
    int age; 
} donnee; 


 typedef struct maillon 
 { 
    donnee *curr; 
    struct maillon *prec; 
    struct maillon *suiv; 
} maillon; 

maillon * creer_element(int age, char * nom);
maillon * insertion_debut(maillon * head, int age, char * nom);
maillon * insertion_fin(maillon * head, int age, char * nom);
maillon * insertion_avant(maillon * head, int age, char * nom, char * target);
void affichage(maillon * head);

