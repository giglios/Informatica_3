// fare un programma che dati 20 numeri ordinati compresi tra 0 e 100,già presenti nell'array, mi faccia la ricerca binaria di un numero
#include<stdlib.h>
#include<stdio.h>

int main(){
	
	int array[]={2,4,6,9,14,24,30,37,45,50,54,60,68,71,77,83,86,90,93,94};  //array di 20 elementi ordinati
	int min; //variabile per il numero minimo
	int max; //variabile per il numero massimo 
	int centro; //variabile per il numero centrale
	int r; //elemento che si vuole cercare
	int trovato; //flag che mi indica quando ho trovato il numero
	int I;//variabile che mi indica quante passi ho fatto prima di trovare il numero
	
	do{				//tramite questo ciclo do-while faccio inserire all'utente il numero che vuole cercare
		printf("\n inserire l'elemento che si vuole cercare, maggiore di 0 e minore di 100:  ");
		scanf("%d",& r);
	}while((r<0)||(r>100));
	trovato=0;
	max=19;
	min=0;
	centro=(max-min)/2;
	while((max!=min) && (trovato==0)){
		if(array[centro]==r){
			trovato=1;
		}else{
			if(array[centro]>r){
				max=centro;
				centro=(max-min)/2+min;
				
			}else{
				min=centro;
				centro=(max-min)/2+min;
			}
		}
		I++;
	}
	if(trovato==1){
		printf("\n il numero e' stato trovato con %d passi, e si torva nella posizione %d:  ",I, cent);
	}else{
		printf("\n il numero non e' stato trovato");
	}
	system("PAUSE");
}
