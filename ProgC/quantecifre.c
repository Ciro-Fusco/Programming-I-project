//Ricevo un intero in input controllo che sia un numero e mostro il numero di cifre inserite

#include<stdio.h>

int main(void)
{
	char num;
	int conta=0;
     
	printf("Inserisci una cifra intera\n");
	num=getchar();
	if(num<48 || num>57)
          {printf("Non hai inserito un intero\n");
	   return 0;
	  }
	else while(num>47 && num<58)
	     {
                conta++;
		num=getchar();
		if ((num<48 || num>57) && num!='\n')
                    {printf("Hai inserito un valore che non è un numero\n");
			return 0;
   	            }
	     }
printf("Hai inserito: %d cifra(e)\n", conta);
return 0;

}
