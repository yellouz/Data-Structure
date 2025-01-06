#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int TMAX = 100;

struct Personne
{
  int num_tele;
  char nom[100];
  int vide;  // 0 = False     1 = True
};

// les fonctions :

void init_repertoire(struct Personne * p)
{
    for(int i = 0; i < TMAX; i++)
         p[i].vide = 1;;
}


int taille(struct Personne * p)
{
    int cmpt = 0;
     for(int i = 0; i < TMAX; i++)
     {
        if(p[i].vide == 0)
            cmpt++;
     }
     return cmpt;
}


void ajouter_num(struct Personne * p)
{
    for(int i = 0; i < TMAX; i++)
    {
        if(p[i].vide == 1)
        {
            puts("saisir votre num : ");
            scanf("%d",&p[i].num_tele);
            puts("saisir votre nom : ");
            scanf("%s",&(p[i].nom));
            p[i].vide = 0;
            return;
        }
    }
    puts("pas de cases suffisant!");
}


int indice_num(struct Personne * p, int num)
{
    for(int i = 0; i < TMAX; i++)
    {
        if(p[i].num_tele == num && p[i].vide == 0)
            return i;
    }
    puts("aucune occurence");
    return (-1);
}


void affiche_nom(struct Personne * p, int num)
{
    for(int i = 0; i < TMAX; i++)
    {
        if(p[i].num_tele == num && p[i].vide == 0)
        {
            printf("cet num appartient à : ");
            puts(p[i].nom);
            return;
        }
    }
    puts("aucune occurence");
}


int nb_occ_numero(struct Personne * p, int num)
{
    int cmpt = 0;
    for(int i = 0; i < TMAX; i++)
    {
        if(p[i].num_tele == num)
            cmpt++;
    }
    return cmpt;
}


void supprime_element(struct Personne * p, int indice)
{
    for(int i = indice; i < TMAX - 1; i++)
        p[i] = p[i+1]; // on ne veut pas de trous dans la repertoire
    p[99].vide = 1;
}

void supprime_1_apparition(struct Personne * p, int num)
{
    int appartitions = 0;
    for(int i = 0; i < TMAX; i++)
    {
        if(p[i].num_tele == num && p[i].vide == 0)
            appartitions++;
        if(appartitions == 2)
        {
            supprime_element(p, i);
            puts("done");
            return;
        }
    }
    if(appartitions == 0)
        puts("aucune occurence");
    else if(appartitions == 1)
        puts("seulement une occurence");
}

void supprime_apparitions(struct Personne * p, int num)
{
    int appartitions = 0;
    for(int i = 0; i < TMAX; i++)
    {
        if(p[i].num_tele == num && p[i].vide == 0)
            appartitions++;
        if(appartitions == 2)
        {
            supprime_element(p, i);
            appartitions = 1;
        }
    }
    if(appartitions == 0)
        puts("aucune occurence");
    else if(appartitions == 1)
        puts("seulement une occurence");
    else
        puts("done");
}

void supprime_doublons(struct Personne * p)
{
    for(int i = 0; i < TMAX; i++)
        supprime_apparitions(p,p[i].num_tele);
}

int main()
{
    struct Personne repertoire[100];

    //appel des fonctions :

    puts("fonction 1 : initialisation de la repertoire");
    init_repertoire(&repertoire[0]);

    puts("fonction 2 : taille de repertoire");
    printf("le nbr des numeros stockes dans la repertoire est : %d \n",taille(&repertoire[0]));

    puts("fonction 3 : ajout de numero");
    ajouter_num(&repertoire[0]);

    puts("fonction 4 : donner le numero que vous voulez chercher son indice");
    int num;
    scanf("%d",&num);
    printf("son indice est : %d \n",indice_num(&repertoire[0], num));

    puts("fonction 5 : donner le numero que vous voulez chercher son propriétaire");
    scanf("%d",&num);
    affiche_nom(&repertoire[0], num);

    puts("2eme partie : fonction 1 : quel numero voulez savoir son nombres d'occurece");
    scanf("%d",&num);
    printf("cet num se repete %d fois \n", nb_occ_numero(&repertoire[0],num));

    puts("fonction 2 : saisir l'indice d'element que vous voulez supprimez (0 - 99)");
    scanf("%d",&num);
    supprime_element(&repertoire[0], num);

    puts("fonction 3 : donner le numero que vous voulez supprimer sa deuxieme occurence");
    scanf("%d",&num);
    supprime_1_apparition(&repertoire[0], num);

    puts("fonction 4 : donner le numero que vous voulez supprimer tous ces occurences");
    scanf("%d",&num);
    supprime_apparitions(&repertoire[0], num);

    puts("fonction 5 : suppression de tous les doublons dans la repertoire");
    supprime_doublons(&repertoire[0]);


    return 0;
}
