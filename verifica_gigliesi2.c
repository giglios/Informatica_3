/* scrivere un programma in pseudocodifica e successivamente in linguaggio c che consenta di prendere in input un vettore di K elementi con K minore di 100
   e un valore NUM. il programma deve cercare il valore NUM e stampare il messaggio NUM non trovato nel caso NUM non fosse presente nella lista; qual'ora
   NUM fosse presente nella lista il programma deve eliminarlo dalla lista con il metodo dello shift */
   
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main(){
	int vettore[100];// array	
        int x;// variabile per l'array
        int K;// vettore per l'array
        int trovato;// variabile che mi dice quando ho trovato il numero	
        int pos;// variabile che mi indica la posizione	
        int NUM;// numero da trovare nell'array		
	do{
		printf("\n inserire il numero di elementi del vettore  ");
		scanf("%d",& K);
	}while(K>100);// se k è minore di 100 all'ora			
            x=0;
	while(x<K){// finché x è minore di k fai il ciclo		
                printf("\n inserire un numero  ");
		scanf("%d",& vettore[x]);
		x++;
	}
	printf("\n inserire il numero da cercare");
	scanf("%d",& NUM);
	trovato=0;
	pos=0;
	x=0;
	while((pos<K)&&(trovato==1)){// finché posso è minore di k è trovato è uguale a 1		
                        if(vettore[x]==NUM){//se il numero dell'array è uguale al numero da cercare allora imposta trovato uguale a 1			
                            trovato=1;
		}
		pos++;
		x++;
	}
	if(trovato==0){// se trovato è uguale a 0 allora il numero nn si trova nella lista	
                printf(NUM,"\n %d non è presente nella lista");
	}
}
