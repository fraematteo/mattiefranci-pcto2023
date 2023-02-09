#include  <stdio.h>

int main()
{   
int numero;
int base;
float risultato; 

printf("inserisci la base\n");
scanf("%d", &base);

printf("inserisci l'esponente\n");
scanf("%d", &esponente);

while(esponente !=0)
{
    risultato = risultato*base;
    esponente = -1;
}

printf("risposta %f\n", risultato);




}