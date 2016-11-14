/*programma che fa la somma dei primi 100 numeri*/
#include <stdio.h>
#include <stdlib.h>
main()
{
      int somma;//variabile che fa la somma
      int I;//contatore
      int n;//numeri da sommare
      printf("\n inserire il numero di valori da calcolare: ");
      scanf("%d",&n);
      I=1;//assegno al contatore 1
      somma=0;//assegno alla somma 0 
      while(I<=n){ //finchè il contatore è minore dei numeri ripetere il ciclo
                  somma=I+somma;//per fare la somma faccio la somma tra il contatore e la somma precedentemente inizializzata
                  I=I+1;//aumento il contatore di 1
      }
      printf("\n la somma dei primi %d e': %d",n,somma);
      system("pause");

}
