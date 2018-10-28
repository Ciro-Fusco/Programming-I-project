//Data una parola visualizza il punteggio in scarabeo

#include<stdio.h>


int main(void)
{
  char ch;
  int punt=0;
  
  printf("Inserire la parola\n");
  scanf(" %c",&ch);
  
  while(ch!='\n')
       {
          if(ch>96 && ch<123)
             ch=ch-'a'+'A';   
          switch (ch)
          	{
          	   case 'A': case 'E': case 'I': case'L': case'N': case'O':
          	   case 'R': case'S': case 'T': case 'U': punt+=1;  break;
          	   case 'D': case 'G': punt+=2; break;
          	   case 'B': case 'C': case 'M': case 'P': punt+=3; break;
          	   case 'F': case 'H': case 'V': case 'w': case'Y': 
          	                          punt+=4; break;
               case 'K': punt+=5; break;
               case 'J': case 'X': punt+=8; break;
               case 'Q': case 'Z': punt+=10; break;
               default:break;
              }
              
              ch=getchar();
         }
         printf("Vale %d punti.\n",punt);
               
return 0;
}
