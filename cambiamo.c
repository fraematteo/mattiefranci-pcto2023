#include <stdio.h>

int main()
{   
    int a;
    int b;
    int c;

    printf("inserisci tre numeri:\n");
    scanf("%d %d %d", &a,&b,&c);
   
    if( a+b>c && a+c>b  && b+c>a)
    {
         printf("e un triangolo \n");
         if (a != b && b != c && a != c)
         {
            printf("e scaleno");
         }
         if (a != c && b !=c && a == b)
         {
            printf("e isoscele");
         }
         if (a == b && b == c && a == c)
         {
            printf("e equilatero");
         }
    }
    else
    {
        printf("non e un triangolo \n");
    }










}