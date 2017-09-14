#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int numero[10];//array contente i numeri
    int a;
    int i;
    int x;
    
	for(x=0;x<=9;x++){
    printf("Inserire un numero:  ");
    scanf("%d",&numero[x]);
    }
    x=0;
    for(i=9;i>x;i--){
        a=numero[i];
        numero[i]=numero[x];
        numero[x]=a;
        x++;
    }
    printf("\n");
    printf("\n L'array inverso e':");
    for(x=0;x<=9;x++){
        printf("%d  ",numero[x]);
    }
    printf("\n");
}
