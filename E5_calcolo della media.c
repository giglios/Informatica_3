//programma che mi fa la media di n numeri dati in input
#include <stdio.h>
#include <stdlib.h>

 main() 
 {
        n          int;
        somma      int;
        i          int;
        num        int;
        media      int;
        
        printf("\n inserire di quanti numeri si vuole la media");
        scanf("%d",& n);
        somma=0;
        i=0;
        while(i<n){ //tramite il ciclo while faccio la somma degli n numeri di cui l'utente vuole sapere la media
                   printf("\n inserire un numero");
                   scanf("%d",& num);
                   somma=somma+num;
                   i++;
        }
        media=somma/n;
        printf("\n la media è di: %d ",media);
  }      
