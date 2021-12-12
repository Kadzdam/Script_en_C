#include <stdio.h>
#include <stdlib.h>


int main()
{

   int TAILLE_TABLEAU;
   int temp;
   int ok;

   ok = 1;

   printf("Donner la taille de la liste : \n");
   scanf("%d",&TAILLE_TABLEAU);

   int tab[TAILLE_TABLEAU];
   int i;

   // Initialiser les élements de la liste
   for (i=0; i< TAILLE_TABLEAU; i++){
    int value;
    printf("Saisisser les élements du tableau : \n");
    scanf("%d",&value);
    tab[i] = value;
   }

   for(i=0 ; i <TAILLE_TABLEAU  ; i++){

    printf("val : %d\n", tab[i]);

   }


printf("------------------------------------------------------------------------\n");


 // Tri du tableau

 while(ok!=0){

 for (i=0; i < TAILLE_TABLEAU; i++){
     if (tab[i] > tab[i+1]){
          temp = tab[i];
          tab[i] = tab[i+1];
          tab[i+1] = temp;
          i = TAILLE_TABLEAU + 1;  // On l'oblige à sortir du for
          ok = 1;
    }
    else{
        ok = 0;
    }

 }
 }

 for(i=1 ; i = TAILLE_TABLEAU  ; i++){

    printf("val : %d\n", tab[i]);

   }

   return 0;

}
















