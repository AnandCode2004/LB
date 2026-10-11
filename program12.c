#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int no = 0;

    printf("Enter Number:  \n");
    
    if (scanf("%d", &no) != 1)
    {
        fprintf(stderr,"Invalid input");

        return EXIT_FAILURE;   // -1
    }      

    printf("Input is Valid");

   
    return EXIT_SUCCESS;     // 0
}