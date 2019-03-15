// array.c
// Auteur: Alexandre Lachapelle
// INF3135 - Mars 2019

#include "array.h"
#include <stdlib.h>

Array* creerArray(const int taille)
{
Array *tab = malloc(sizeof(Array));
tab->elements=malloc(taille * sizeof(int));
tab->taille=taille;

return tab;

}

bool estVide(const Array* array)
{

}

int* accederIndex(const Array* array, int index)
{

}

bool affecterIndex(Array* array, int index, int element)
{

}

void detruireArray(Array* array)
{

}
