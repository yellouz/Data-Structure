#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>

#define TMAX 10 // j'ai utilise taille max du tableau comme var globale juste pour ne pas la passer comme argument en appelant les fonctions
extern int t[TMAX]; // le tableau est une var globale pour ne pas l'appeler en fct chaque fois
extern int top; // top est maintenant variable globale / la valeur -1 est l'initialisation (pile est vide)

extern int max_pile;
extern int min_pile;

void push(int data);
void affichage();
void pop();
void peek();
void max_min_pile();
void somme_pile();
void vider();

#endif // HEADER_H_INCLUDED
