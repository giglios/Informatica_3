#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    
    int n_c;//numero generato casualmento dal pc
    int indovinato;
    int t;//variabile contenente i tentativi
    int n_u;//numero inserito dall'utente
    
    printf("\n                Indovina il numero ");
    n_c=rand();
    indovinato=0;
    t=10;
    printf("\n inserisce un numero");
    scanf("%d",&n_u);
    do{
      if(n_u==n_c){
            indovinato=1;                 
      }
    }while(t>0 && indovinato==0);
    if(indovinato==1){
            printf("\n HAI VINTO");
    }else{
            PRINTF("\n HAI PERSO");
    }

}
