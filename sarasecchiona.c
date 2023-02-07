#include <stdio.h>

int main()
{   
int a;
int b;

printf("sono multipli? \n");
scanf("%d %d", &a , &b);
int risultato= a%b; 

if(risultato = 0)
{
    printf("multiplo");
}
else
{
    printf("a è non multiplo di b");
}






}