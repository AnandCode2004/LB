#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//  
//   Function Name           :Addition    
//   Input                   :Integer,Integer
//   Output                  :Integer
//   Description             :Performs addition
//   Date                    :09/10/2026
//   Author                  :Anand Rashtrapal Ingle
//
//////////////////////////////////////////////////////// 

int Addition (
                    int iNo1,       // first input
                    int iNo2        // second input
             ) 

{
    int iAns = 0;

    iAns = iNo1 + iNo2;            // Business Logic 

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0 , iResult = 0; 

    printf("Enter first number : \n");
    scanf("%d" , &iValue1);  // don't write \n in scanf 

    printf("Enter second number: \n");
    scanf("%d" , &iValue2);

    iResult = Addition(iValue1, iValue2);           

    printf("Addition is : %d\n" , iResult);


    return EXIT_SUCCESS;     
} 



