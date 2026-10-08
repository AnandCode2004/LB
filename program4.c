/*
    Step 1:     Understand the problem statement
    Step 2:     Write the algorithm
    Step 3:     Decide the programming language
    Step 4:     Write the program
    Step 5:     Test the program
*/

////////////////////////////////////////////////////////
//
//  Step 1:   Understand the problem statement
//            User is going to enter any 2 integers
//            And we have to perform Addition
//
////////////////////////////////////////////////////////


////////////////////////////////////////////////////////
//   Step 2:     Write the algorithm
/*
     START
         Accept first number as NO1
         Accept second number as NO1
         Create the variable as Ans to store the result
         perform the addition and store into Ans
         Display the result from Ans.
     END
*/
////////////////////////////////////////////////////////


////////////////////////////////////////////////////////
//
//    Step 3:     Decide the programming language
//                 We select C programming
//
//////////////////////////////////////////////////////// 


//////////////////////////////////////////////////////// 
//
//    Step 4:     Write the program
//
////////////////////////////////////////////////////////   
 

/* taking values from user , this code is better than prvious one */
#include<stdio.h>

int main()
{
    int iValue1, iValue2, iResult;

    printf("Enter first number : \n");
    scanf("%d" , &iValue1);  // don't write \n in scanf 

    printf("Enter second number: \n");
    scanf("%d" , &iValue2);

    iResult = iValue1 + iValue2;          // Business Logic 

    printf("%d\n" , iResult);


    return 0;
} 




/////////////////////////////////////////////////////
/* displayin in not good*/
//Enter first number :
//20
//Enter second number:
//50
//70
//
//////////////