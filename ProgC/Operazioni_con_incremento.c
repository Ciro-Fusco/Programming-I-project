/* Controllo il comportamento di b=a*i++ */  

#include<stdio.h>

int main(void)
{ int b,i=3,a=6;
 
  b=a*(i++); 
  printf("Il valore di i:%d il valore di a:%d il valore di b:%d \n ",i,a,b); 
  i=3;
  b=a*++i; 
  printf ("Il valore di i:%d il valore di a:%d il valore di b:%d \n",i--,a,b); //L'espressione i-- 
  return 0;                                                                   //mostra il valore di
                                                                              //i e solo dopo lo 
                                                                              // decrementa.



}
// Il programma nel primo caso esegue la moltiplicazione e poi aggiorna il valore mentre nel 
//   secondo caso prima aggiorna il valore e poi esegue la moltiplicazione. Il testo però indica
// che questo comportamento è un undefinied behavior.
