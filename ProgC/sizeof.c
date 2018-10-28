//Programma che mostra il numero di byte dedicati ad ogni tipo di variabile

#include<stdio.h>


int main(void)
{
  printf("Size of int:%d Bytes\n",(unsigned long) sizeof(int));
  printf("Size of short:%d Bytes\n",(unsigned long) sizeof(short));
  printf("Size of long:%d Bytes\n",(unsigned long) sizeof(long));
  printf("Size of float:%d Bytes\n",(unsigned long) sizeof(float));
  printf("Size of double:%d Bytes\n",(unsigned long) sizeof(double));
	printf("Size of long double:%d Bytes\n",(unsigned long) sizeof(long double));
return 0;
}
