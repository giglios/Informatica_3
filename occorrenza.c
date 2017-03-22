#include<stdio.h>
#include<stdlib.h>

int main (){
	 
	int I;//variabile contatore
	char nome[100];//stringa
	int scelta;//variabile per la scelta del menù
	char nome_due[100];//copia della prima stringa
	int k;//carattere per il confronto
	int occorrenze;//variabile per le occorrenze
	int lunghezza;//lunghezza del nome
	
	
	printf("\n                 programma per il calcolo della lunghezza e delle occorrenze");
	do{							//tramite questo do-while ripeto il ciclo finchè la scelta è diversa da 0
		printf("\n");
		printf("\n 1. Inserisci il nome di massimo 100 caratteri");
		printf("\n 2. Calcolo lunghezza stringa");
		printf("\n 3. Calcolo occorrenze");
		printf("\n 0. EXIT");
		printf("\n");
		do{	//tramite questo do-while ripeto l'istruzione finchè la scelta non è compresa tra 0 e 3
			printf("\n inserisci la tua scelta(0-3):	");
			scanf("%d",& scelta);
		}while((scelta<0)||(scelta>3));
		
        switch (scelta)			//inizio del menù
		{
			case 1:				//primo caso
				printf("\n inserisci il nome:	");
				scanf("%s",nome);
				printf("\n");
				printf("\n IL TUO NOME E' STATO INSERITO CORRETTAMENTE");
				break;
			
			case 2:			//secondo caso
				I=0;
				while(nome[I]!='\0'){
					I++;
				}
				printf("\n la lunghezza della tua stringa e' di:  %d",I);
				break;
			
			case 3:			//terzo caso
			     I=0;
					while (nome[I]!=0){
						nome_due[I] = nome[I];
						I++;
					}	
					I=0;
					while (nome_due[I]!=0){
						k=nome_due[I];
							lunghezza=0;
							occorrenze=0;
							while (nome_due[lunghezza]!=0){
								if (nome_due[lunghezza]==k){
									occorrenze++;
									nome_due[lunghezza]='0';
								}
								lunghezza++;
							}
							printf("Il carattere %c si ripete %d volte\n",k,occorrenze);
						
						I++;
                     }
                
				
				break;
			    default:
                break;
		}
		printf("\n\n");
		
	}while(scelta!=0); 
}
