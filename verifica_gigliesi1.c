/*scrivere un programma in pseudo codifica e successivamente in linguaggio c che dato un vettore di K elementi con K compreso tra n1 e n2 con n2 minore di 1000 
  e uno scalare NUM intero effettui il prodotto tra lo scalare e il vettore */
  
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

 main() {
 	
 	int vettore[1000];		//array
 	int K;			    //vettore inserito dall'utente
 	int n1;				//primo numero
 	int n2;				//secondo numero
 	int NUM;			//numero scalare intero che si andr� a moltiplicare con l'array
 	int x;				//contatore per l'array
 	
 	do{
 		printf("\n inseire n2 minore di 1000  ");
 		scanf("%d",& n2);
 		printf("\n inserire n1 minore di n2  ");
 		scanf("%d",& n1);
	}while((n2>1000)||(n1>n2));
	do{
		printf("\n inserire il vettore dell'array  ");
		scanf("%d",& K);
	}while((K<n1)||(K>n2));
	x=0;
	while(x<K){
		printf("\n inserire un numero  ");
		scanf("%d",& vettore[x]);
		x++;
	}
	printf("\n inserire un numero intero  ");
	scanf("%d",& NUM);
	x=0;
	while(x<K){
		vettore[x]=vettore[x]*NUM;
		printf("%d  ",vettore[x]);
		x++;
	}
	 
}
