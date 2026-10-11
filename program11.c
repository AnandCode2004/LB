#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int iNo1 = 0;

    printf("Enter Number:  \n");
    if (scanf("%d", &iNo1) != 1)        // enter number is not equal 1 asel ter if chya at yaa

    {
        printf("Invalid input");

        return EXIT_FAILURE;   // -1
    }      

    printf("Input is Valid");   // jer input 1 chay equal asel ter if chya baher ya

   
    return EXIT_SUCCESS;     //  0

}