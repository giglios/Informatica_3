include<stdio.h>
main()
{
      float h;//altezza delle persone
      float dis;//persona disabile
      float pr;//prezzo
      float anni;//et� della persona
      float acc;//accompagantore
      printf("la persona � disabile?(1=si,0=no) \n");
      scanf"%f",& dis);
      if(dis==1){/*se il cliente � disabile allora il biglietto ser� gratis*/
           pr=GRATIS;
      }else{
           printf("la persona � un accompagnatore?(s=si,n=no) \n");
           scanf"%f",& acc);
           if(acc==1){/*se la persona � un accompagantore allora il prezzo sar� di 25,50 euro*/
                pr=25,50;
           }else{
                printf("quanti anni ha il cliente? \n");
                scanf("%f",& anni);
                if(anni>=60){/*se il cliente ha pi� 60 anni allora il prezzo � di 25 euro*/
                     pr=25;
                }else{
                     printf("quanto � alto il cliente? \n");
                     scanf("%f",& h);
                     if(h>100 && h<140){/*se il cliente ha un'altezza tra i 100 e 140 centimetri allora il costo del biglietto sar� di 28 euro*/
                             pr=28;
                             printf("il cliente vuole il supplemento per mirabeach?(1=si,0=no) \n");
                             scanf"%f",& dis);
                             if(dis==1){/*se il cliente vuole il supplemento per mirabeach allora il prezzo aumenter� di 7,50 euro*/
                                  pr=35,50;
                             }      
                     }else{
                             if(h>140){/*se il cliente ha un'altezza superiore ai 140 centimetri allora il costo del biglietto sar� di 34,90 euro*/
                                   pr=34,90;
                                   printf("il cliente vuole il supplemento per mirabeach?(1=si,0=no) \n");
                                   scanf"%f",& dis);
                                   if(dis==1){/*se il cliente vuole il supplemento per mirabeach allora il prezzo aumenter� di 9,50 euro*/
                                        pr=44,40;
                                   }
                             }else{
                                   if(h<100){/*se il cliente � alto meno di 100 centimetri allora il costo del biglietto sar� gratis*/
                                             pr=gratis;
                                   } 
                             }
                     }
                }
           }
      }
      printf("il costo del biglietto � di: %d euro",pr);
}
