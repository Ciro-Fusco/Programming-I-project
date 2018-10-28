//Programma che riceve una parola e mostra solo quelle di posto dispari

#include<stdio.h>


int main(void)
{ char lettera;
  
	printf("Inserire una parola\n");
	do{
	      lettera=getchar();
              if(lettera!='\n')
              putchar(lettera);
	      if((lettera=='\n') || (getchar()=='\n'))
		 break;

	  }while(lettera!='\n');
printf("\n");
return 0;



}
