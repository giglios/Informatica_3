#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
    int i;
    int pos;
    int v[10]={1,2,3,4,5,6,7,8,9,10};
    int tot; //numero totale di valori caricati nell'array
    
	tot=10;
    printf("Inserire la posizione del numero che vuoi eliminare:  ");
    scanf("%d",&pos);
    for(i=pos;i<(tot-1);i++){ //tramite questo for faccio la ricerca del numero da eliminare
        v[i]=v[i]+1;
    }
    tot--;
    for(i=0;i<tot;i++){ //tramite questo for faccio la stampa dell'array senza il numero nella posizione scelta dall'utente
        printf("%d",v[i]);
    }
    printf("\n");
}
