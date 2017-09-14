#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
              int I;	//contatore
			  int array[10];	
              for(I=0;I<10;I++){	//tramite questo ciclo faccio l'inserimento dei valori nell'array
			  		printf("Inserire il numero dell'array:  ");
			  		scanf("%d",&array[I]);
               }
              for(I=9;I>=0;I--){	//tramite questo ciclo faccio la stampa inversa dell'array solo se il numero è diverso da 0
			  		if(array[I]!=0){
							printf("\n L'array inverso e':   %d",array[I]);
					 }
               }
}
