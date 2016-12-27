//programma che dato un numero naturale mi calcola il suo fattoriale
#include <stdio.h>
#include <stdlib.h>

 main() 
 {
        n          int;
        fattoriale int;
        i          int;
       
        
        printf("\n inserire un numero naturale");
        scanf("%d",& n);
        fattoriale=1;
        for(i=n;i>0;i--){ //tramite il ciclo for calcolo il fattoriale del numero naturale
                   fattoriale=fattoriale*i;
        }
        printf("\n il numero fattoriale è: %d ",fattoriale);
  }      
