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
 

/* reusable code previous all one only usable */

#include<stdio.h>

int Addition (int iNo1 , int iNo2) 
{
    int iAns = 0;

    iAns = iNo1 + iNo2;   // Business Logic 

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0 , iResult = 0; 

    printf("Enter first number : \n");
    scanf("%d" , &iValue1);  // don't write \n in scanf 

    printf("Enter second number: \n");
    scanf("%d" , &iValue2);

    iResult = Addition(iValue1, iValue2);            // don't write businnes logic inside main / entry point function , it should be written in seperate helper function
                                                    // your business logic should be reusable 
                                                     // your  code is usable not reusable
                                                     // important , helper function should not contains IO means printf , scanf

    printf("Addition is : %d\n" , iResult);


    return 0;
} 



