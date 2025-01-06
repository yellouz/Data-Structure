#include<stdio.h>

typedef struct node
{
    int data;
    int droit;
    int gauche;
}node;

void determiner_racine(node t[],int taille) // j'ai pas tester tous les cas possibles (comme arbre vide etc..)
{
    int etat[taille]; 
    int indice;

    // initialiser le tableau par 0

    for (int i = 0; i < taille; i++)
    {
        etat[i] = 0;
    }
    
    // si une noeud pointe sur une autre on va mettre 1 dans l'indice associée au noeud pointee dans le tab etat 

    for(int i = 0; i < taille; i++)
    {
        if(t[i].gauche != -1)
        {
            indice = t[i].gauche;
            etat[indice] = 1;
        }

        if(t[i].droit != -1)
        {
            indice = t[i].droit;
            etat[indice] = 1;
        }
    }

    // on recherche maintenant l'indice du root (aucune noeud pointe sur lui)

    for (int i = 0; i < taille; i++)
    {
        if(etat[i] == 0)
            printf("l'indice %d contient la racine! \n", i);
    }
}

void determiner_feuilles(node t[],int taille)
{
    int etat[taille]; 
    int indice;

    // initialiser le tableau par 0

    for (int i = 0; i < taille; i++)
    {
        etat[i] = 0;
    }

    // on va tester sur les noeud qui ne pointent sur aucune noeud (champ droit == gauche == -1)

    for(int i = 0; i < taille; i++)
    {
        if ((t[i].gauche == -1) && (t[i].droit == -1))
        {
            etat[i] = 1;
        }
    }

    // les champs qui contient la valeur 1 dans le tableau etat sont des feuilles

    for (int i = 0; i < taille; i++)
    {
        if(etat[i] == 1)
            printf("l'indice %d est une feuille! \n", i);
    }
}

int main()
{
    node t[10];

    t[0].data = 23;
    t[0].gauche = -1;
    t[0].droit = -1;

    t[1].data = 2;
    t[1].gauche = 4;
    t[1].droit = 5;

    t[2].data = 3;
    t[2].gauche = 3;
    t[2].droit = 0;

    t[3].data = 5;
    t[3].gauche = -1;
    t[3].droit = -1;

    t[4].data = 7;
    t[4].gauche = -1;
    t[4].droit = -1;

    t[5].data = 11;
    t[5].gauche = 9;
    t[5].droit = -1;

    t[6].data = 13;
    t[6].gauche = -1;
    t[6].droit = 2;

    t[7].data = 37;
    t[7].gauche = 8;
    t[7].droit = 1;

    t[8].data = 41;
    t[8].gauche = 6;
    t[8].droit = -1;

    t[9].data = 19;
    t[9].gauche = -1;
    t[9].droit = -1;

    determiner_racine(&t[0], 10);
    determiner_feuilles(&t[0], 10);
    
    return 0;
}