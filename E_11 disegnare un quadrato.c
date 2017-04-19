#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    
    int lato;//lato del quadrato
    int I;//contatore
    int k;//contatore
    
    printf("\n          Programma che tramite l'uso del carattere * disegna un quadrato");
    do{                           //tramite questo do-while faccio inserire all'utente la lunghezza del lato compresa tra 1 e 20
        printf("\n inserire il lato del quadrato(1-20):     ");
        scanf("%d",&lato);
    }while((lato<0)||(lato>20));
    I=0;
    while(I<lato){              
          printf("*");
          k=1;
          while(k<lato-1){
                if((I=0)||(I=(lato-1))){
                       printf("*");
                }else{
                       printf(" ");
                }
                k++;           
          }
          printf("*");
          printf("\n");
          I++;
    } 
}
