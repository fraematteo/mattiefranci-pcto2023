#include <stdio.h>

int main()
{   
    int anni;

    printf("quanti anni hai? \n");
    scanf("%d", &anni);


    if(anni >= 18)
    {
        printf("è maggiorenne\n");   
    }
    else
    {
        printf("è minorenne\n");
    }
}