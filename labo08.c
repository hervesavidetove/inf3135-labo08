// labo08.c
// Auteur: Alexandre Lachapelle
// Programme test pour Array
// INF3135 - Mars 2019

#include <stdio.h>
#include "array.h"


int main(int argc, char *argv[])
{
   // Testez Array ici.
Array *tableau=creerArray(8);
printf("%d\n",tableau->taille);

   return 0;
}
