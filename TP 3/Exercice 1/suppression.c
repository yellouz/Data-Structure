#include"header.h"

node * findLargestNode(node * root) // on va utiliser cette fct pour la suppression
{
    if(root == NULL)
        puts("arbre est vide!");
    else
    {
        if(root->droit == NULL)
            return root;
        else
            root = findLargestNode(root->droit);
    }
}


node * suppression(node * root, int id) // fct de suppression d'apres le cours :)
{
    if(root == NULL)
        puts("arbre est vide!");
    else
    {
        if(id < root->id)
            root = suppression(root->gauche, id);
        else if(id > root->id)
            root = suppression(root->droit, id);
        else
        {
            node * tmp;

            if((root->droit != NULL) && (root->gauche != NULL)) // cas ou la node qu'on veut supprimer a deux fils
            {
                tmp = findLargestNode(root->gauche);
                root->id = tmp->id;
                root->gauche = suppression(root->gauche, tmp->id);
            }
            else
            {
                tmp = root;
                if(root->gauche != NULL)
                {
                    root = root->gauche;
                    root->gauche = suppression(root->gauche, tmp->id);
                }

                else // on peut affecter dans ce cas aussi nulle si root->droit == null
                {
                    root = root->droit;
                    root->droit = suppression(root->droit, tmp->id);
                }
            }
        }
    }
}

