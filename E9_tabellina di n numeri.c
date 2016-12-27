//programma che mi stampa la tabellina di tutti i numeri naturali compresi tra 2 e 0
#include <stdio.h>
#include <stdlib.h>

 main() 
 {
        n          int;
        tab        int;
        i          int;
        n=2;
        while(n<==10){//tramite il ciclo while stampo tutte le tabelline da 2 a 10
                      tab=0;
                      i=0;
                      while(i<==10){ //tramite il ciclo while stampo la tabellina di un singolo numero
                                     tab=tab+n;
                                     printf("%d",tab);
                                     i++
                      }
        printf("\n");
        n++;
        }
  }      
