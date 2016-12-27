//programma che dati n numeri interi mi calcola il numero minimo
#include <stdio.h>
#include <stdlib.h>

 main() 
 {
        n          int;
        min        int;
        i          int;
        num        int;
        
        printf("\n inserire quanti numeri ci sono");
        scanf("%d",& n);
        i=1;
        do{
        printf("\n inserire un numero");
        scanf("%d",& num);
        if(i==1){
                 min=num;
        }else{
                 if(num<min){
                             min=num;
                 }
        }
        i++
        }while(i<=n)
        printf("\n il numero minimo è: %d ",min);
  }      
