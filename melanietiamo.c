#include <stdio.h> 

int main() 
{   
    int a;
    int b;

    printf("inserisci due numeri");
    scanf("%d %d", &a,&b);
    int divisione = a/b;
    int resto = a%b;

    printf ("la divisione di a e b è: %d\n ", divisione );
    printf ("il resto di a e b è: %d\n" , resto);




}