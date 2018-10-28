/*Prove funzioni scanf e printf*/

#include<stdio.h>


int main(void)
{
   int i,r;
   int s;
   printf("Ciao, inserisci 3 valori\a\n");
   scanf("%d%d%d", &i, &s, &r);
   printf("%d %-.3d %.2d \a \n",i,s,r );
   return 0;
}




/*  Invertendo %d con %f il compilatore caccia un warning. 
    Le cifre dopo la virgola sono tutte arrotondate se la precisione è minore dei decimali         inseriti, invece se la precisione è maggiore dei numeri inseriti ci troveremo degli errori infinitesimali da attribuire alla conversione in binario. Se si inserisce un numero con la virgola al posto di un intero in scanf la funzione tronca solo la parte intera senza arrotondare.
Se si inserisce un valore con la virgola in un contenitore intero, la parte decimale verrà conservata nel primo contenitore (successivo a quello in uso al momento) di tipo float disponibile; altrimenti il valore decimale verrà perso.   */
