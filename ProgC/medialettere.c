//Programma che data in input una frase calcola la media di lettere per parola

#include<stdio.h>

int main(void)
{
	char ch,sh;
	int par=1,lett=0;											//par=1 è necessaria dato che il conteggio avviene sugli spazi 
																			  //successivi la parola ma nel caso dell'ultima parola non 
																				//ci sono spazi e quindi verrebbe persa in par
	
	printf("Inserire una frase\n");
	ch=getchar();
	for(;;)
			{
				while(ch!=' ' && ch!='\n' )         
						{	lett++;
							ch=getchar();
						}
							sh=ch;
							if(ch=='\n')               //In questo caso l'ordine degli if non può essere invertito 
	  						 break;									 //perchè se sh fosse uguale a \n la getchar() successiva
							if(sh!=(ch=getchar()) && ch!='\n')//andrebbe in loop poichè nel buffer dopo \n non c'è
							                                  // nessun  char da poter prendere e quindi il programma
							   par++;                         //si blocca.

	  						 
	  	}
	  	
	  	printf("La media vale:%.1f\n", (float) lett/ (float) par);
	  	
	 return 0;
}
