#include <stdio.h>

int main()
{
   int a;
   int b;
   int c; 

   printf("inserisci tre numeri\n");
   scanf("%d %d %d", &a ,&b ,&c );
   if(b-a==c-b)
   {
    printf("progressione aritmetica");
   }
   else 
   {
    printf("non è progressione aritmetica");
   }
   }