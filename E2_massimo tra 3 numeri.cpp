/*programma che mi trova il numero massimo tra 3 numeri*/
#include <stdio.h>
#include <stdlib.h>
main () 
{
     int n1;//primo numero
     int n2;//secondo numero
     int n3;//terzo numero
     int max;//variabile per il numero massimo
     printf("\n inserire il primo numero: ");
     scanf("%d",&n1);
     printf("\n inserire il secondo numero: ");
     scanf("%d",&n2);
     printf("\n inserire il terzo numero: ");
     scanf("%d",&n3);
     if (n1>n2){//verifico se il primo numero � maggiore del secondo
                max=n1;//se � maggiore il massimo � il primo numero
     }else{//se il primo numero non � maggiore del secondo allora
                max=n2;//il numero massimo � il secondo numero
     }
     if (n3>max) { //verifico se il terzo numero � maggiore del massimo del primo if
                 max=n3;//se � maggiore allora il numero massimo � il terzo
     }
     printf("\n il numero maggiore e': %d",max);
     system("pause");
}
