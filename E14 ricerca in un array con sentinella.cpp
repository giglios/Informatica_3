#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int i;	//contatore
    int v[10]={5,10,7,3,4,2,6,9,8,1}; 
    int n;	// numero da cercare
    int pos;	//poizione del numero
    printf("Inserire il numero da cercare: ");
    scanf("%d",&n);
    v[10]=n;
    i=0;
    while(v[i]!=n){	//tramite questo while controllo se il numero è stato trovato
        i++;
    }
    pos=i;
    if(pos<10){
        printf("il numero e' stato trovato ed e' in posizione: %d",pos+1);
    }
    else{
        printf("il numero non e' stato trovato");
    }
    printf("\n");
}
