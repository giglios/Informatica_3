//programma che scambia i valori tra due variabili
#include <stdio.h>
#include <stdlib.h>
main()
{
        int a;//prima variabile
        int b;//seconda variabile
        int temp;//variabile di lavoro
        printf("\n inserire il primo valore: ");
        scanf("%d",&a);
        printf("\n inserire il secondo valore: ");
        scanf("%d",&b);
        printf("\n inserire il valore della variabile di lavoro: ");
        scanf("%d",&temp);
        temp=a;//assegno alla variabile di lavoro il valore della prima variabile
        a=b;//assegno alla prima variabile il valore della seconda variabile
        b=temp;//assegno alla seconda variabile il valore della variabile di lavoro
        printf("\n il valore del primo valore e': %d",a);
        printf("\n il valore del secondo valore e': %d",b);
        system("pause");
}
