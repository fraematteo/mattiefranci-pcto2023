#include  <stdio.h>

int main()
{

    int anno;

    printf("quando sei nato? \n");
    scanf ("%d",&anno);

    if(anno > 1969 )
    {
        printf ("annodopo: %d\n", anno-1969);
    }
    else if( anno<1969)
    {
        printf("annoprima: %d\n", 1969-anno);

    }   
    else 
    {
        printf("stessoanno\n");
    }










}