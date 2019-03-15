// array.h
// Auteur: Alexandre Lachapelle
// INF3135 - Mars 2019

#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <stdbool.h>

// struct Array
// int taille: Combien d'elements peut contenir l'array (espace alloue)
// int* elements: ptr vers l'array dynamique des elements

typedef struct Array {
        int taille;
        int *elements;
} Array;

// creerArray
// Creee dynamiquement et initialise l'array
// Parametres:
//   const int taille : Le nombre d'elements maximum de l'array
// Retour:
//   Array*: pointeur vers l'array cree
Array* creerArray(const int taille);

// estVide
// Verifie si l'array est vide
// Parametres:
//   const Array* array : Ptr vers l'array a verifier
// Retour:
//   bool: true si aucun element
bool estVide(const Array* array);

// accederIndex
// Accede et retourne l'element situe a l'index fourni
// Parametres:
//   const Array* array : Ptr vers l'array a acceder
// Retour:
//   int* : ptr vers l'element situe a l'index demande
//          NULL si index invalide
int* accederIndex(const Array* array, int index);

// affecterIndex
// affecter l'element situe a l'index desire
// Parametres:
//   Array* array  : Ptr vers l'Array a modifier
//   int index     : Index de l'element a modifier
//   int element   : valeur a affecter
// Retour:
//   bool: false si une erreur s'est produite (hors borne par exemple)
bool affecterIndex(Array* array, int index, int element);

// detruireArray
// Desalloue les elements et l'array
// Parametres:
//  (Array *) array: l'array a desallouer
void detruireArray(Array* array);


#endif //__ARRAY_H__

