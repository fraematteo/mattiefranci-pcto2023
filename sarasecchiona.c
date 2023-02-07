#include <stdio.h>

int main()
{   
int a;
int b;

printf("inserisci due numeri, sono multipli? \n");
scanf("%d %d", &a , &b);
int risultato= a%b; 

if(risultato == 0)
{
    printf("multiplo\n");
}
else
{
    printf("a è non multiplo di b\n");
}






}