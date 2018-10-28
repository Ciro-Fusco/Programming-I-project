//Programma che prende il numero di quadrati che vogliamo visualizzare e ci mostra il quadrato uno
//alla volta e ogni 24 qudrati ci chiede se vogliamo continuare


#include<stdio.h>


int main(void)
{
  int i, n;
  char ch;
  
  printf("Questo programma stampa i quadrati\n");
  printf("Inserisci il numero di valori da inserire nella tabella\n");
  scanf("%d", &n);
  getchar();
  
  for(i=1; i<=n; i++)
  		{
  		 	printf("%10d\t%10d\n",i,i*i);
  		 	if((i%24)==0)
  		 	  {
  		 	    printf("Per continuare premere invio");
  		 	    while(getchar()!='\n')
  		 	    		  ;
  		 	  }
  		}
  		
  return 0;
}
