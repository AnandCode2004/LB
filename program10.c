#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ret = 0;    // scanf chi return value pakadnya kartya
    int no = 0;

    printf("Enter Number:  \n");
    ret = scanf("%d", &no);      

    printf("Return value is : %d\n" , ret);  
    
    return EXIT_SUCCESS;
}