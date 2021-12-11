#include <stdio.h>
#include <stdlib.h>

int main()
{

   // Initialisation des variables

   const float T[10];
   int i;
   float S;
   float moyenne;

   // Iteration sur le tableau
   for (i=0 ; i < 10 ; i++ ){

        printf("Entrer un nombre pour le tableau pour la position : %d\n",i+1);
        scanf("%f",&T[i]);
        S = S + T[i];
   }


   moyenne = S / 10;

   printf("Les moyennes des 10 elements est : %f",moyenne);



    return 0;

   }



