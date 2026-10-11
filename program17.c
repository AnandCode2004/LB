#include<stdio.h>
#include<stdlib.h>

int main ()
{

    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d" , &iValue);

    if ((iValue % 2) == 0) 
    {
       printf("%d is Even number\n" , iValue); 
    } 
     else 
    {
        printf("%d is Odd number\n" , iValue); 
    }

    return EXIT_SUCCESS;
}