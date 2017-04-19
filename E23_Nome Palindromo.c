#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    
    int medio;
    int I;
    int cont;
    int palindromo;
    char parola[100];
    
    printf("\n          Programma per il nome palindromo");
    printf("\n");
    printf("\n inserire un nome:      ");
    scanf("%d",& parola);
    cont=0;
    while(parola[cont]!='\0'){
              cont=cont+1;
    }
    I=0;
    palindromo=1;
    medio=cont/2;
    while((I<medio)&&(palindromo==1)){
            if(parola[cont-1]!=parola[I]){
                    palindromo=0;
            }
            I=I+1;
            cont--;
    }
    if(palindromo==1){
           printf("\n il nome e' palindromo");
    }else{
           printf("\n il nome non e' palindromo");
    }
          
}
