#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;
}node;

extern node * head; // le pointeur sur premier element est un variable globale 
extern int max;
extern int min;

node * creer_element(int data);
void push(int data);
void affichage();
void pop();
void peek();
void max_min();
void somme();
void vider();



