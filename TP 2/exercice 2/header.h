#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    int priority;
    node * next;
}node;

extern node * head = NULL;
extern node * rear = NULL;

node * creation(int data, int priority);
void ajouter(int data, int priority);

#endif // HEADER_H_INCLUDED
