/* scrivere un programma in pseudocodifica e successivamente in linguaggio c che consenta di prendere in input un vettore di K elementi con K minore di 100
   e un valore NUM. il programma deve cercare il valore NUM e stampare il messaggio NUM non trovato nel caso NUM non fosse presente nella lista; qual'ora
   NUM fosse presente nella lista il programma deve eliminarlo dalla lista con il metodo dello shift */
   
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main(){
	int vettore[100];
	int x;
	int K;
	int trovato;
	int pos;
	int NUM;
	
	do{
		printf("\n inserire il numero di elementi del vettore  ");
		scanf("%d",& K);
	}while(K>100);
	x=0;
	while(x<K){
		printf("\n inserire un numero  ");
		scanf("%d",& vettore[x]);
		x++;
	}
	printf("\n inserire il numero da cercare");
	scanf("%d",& NUM);
	trovato=0;
	pos=0;
	x=0;
	while((pos<K)&&(trovato==1)){
		if(vettore[x]==NUM){
			trovato=1;
		}
		pos++;
		x++;
	}
	if(trovato==0){
		printf(NUM,"\n %d non è presente nella lista");
	}
}
