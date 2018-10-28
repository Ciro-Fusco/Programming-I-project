//Riceve una parola in input e la codifica spostando tutte le lettere indietro di un posto


#include<stdio.h>

int main (void)
{
  char lett;
	
	printf("Inserire una parola:\n");
        while((lett=getchar())!='\n')
	     {  
		if((lett!='a')&&(lett!='A'))
 		        putchar((lett-1));
		else if(lett=='a')
			printf("z");
		else if(lett=='A')
			printf("Z");
	     }
 printf("\n");
return 0;
}
