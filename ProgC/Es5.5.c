/*Esercizio 5.5 Kings*/

#include<stdio.h>

int main(void)
{   int  scelta,upc1,upc2,upc3,upc4,upc5,upc6,upc7,upc8,upc9,upc10,upc11,upc12,somma1;
    int  somma2,totale,resto,check;
    printf("Quale tipo di codice si vuole inserire?\n 1 EAN \t 2 UPC\n");
   
    scanf("%d",&scelta);
    if(scelta==2)
      {
    	printf("Inserire il codice UPC:");

    	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&upc1,&upc2,&upc3,&upc4,&upc5,&upc6,&upc7,&upc8,
          &upc9,&upc10,&upc11);

    	somma1=upc1+upc3+upc5+upc7+upc9+upc11;
    	somma2=upc2+upc4+upc6+upc8+upc10;
    	totale=somma1*3+somma2;
    	totale-=1;
    	totale%=10;
    	check=9-totale;
      }
     else
      {

        printf("Inserire il codice EAN:");

    	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&upc1,&upc2,&upc3,&upc4,&upc5,&upc6,&upc7,&upc8,
          &upc9,&upc10,&upc11,&upc12);

    	somma2=upc1+upc3+upc5+upc7+upc9+upc11;
    	somma1=upc2+upc4+upc6+upc8+upc10+upc12;
    	totale=somma1*3+somma2;
    	totale-=1;
    	totale%=10;
    	check=9-totale;





      }

    printf("Il codice di controllo risulta:%d\n",check);

    return 0;









}
