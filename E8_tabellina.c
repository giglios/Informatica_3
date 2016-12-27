//programma che dato un numero naturale compreso tra 2 e 10 mi stampa la relativa tabellina
#include <stdio.h>
#include <stdlib.h>

 main() 
 {
        n          int;
        tab        int;
        i          int;
        
        do{//tramite il ciclo do-while verifico se il numero è compreso tra 2 e 10
           printf("\n inserire un numero compreso tra 2 e 10");
           scanf("%d",& n);
        }while((n<2)||(n>10))
        i=1;
        tab=0;
        while(i<==10){ //tramite il ciclo while stampo tutta la tabellina
                      tab=tab+n;
                      printf("%d",tab);
                      i++
        }
  }      
