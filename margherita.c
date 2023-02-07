#include <stdio.h>

int main()
{   

float celsius;

printf (" inserisci numero : \n ");
scanf ("%f" , & celsius);
if(celsius<-273.15)
{
    printf("errore\n");
}
else 
{
float fahrenheit = celsius * (9/5) + 32;
printf("in fahrenheit: %f\n ", fahrenheit);
float kelvin = celsius + 273.15;
printf("in kelvin: %f \n ", kelvin);
}

}