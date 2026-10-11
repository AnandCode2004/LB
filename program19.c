#include<stdio.h>
#include<stdlib.h>    // for EXIT_SUCCESS
#include<stdbool.h>  // for boolean


 bool CheckEven(int iNo1)
{
     if ((iNo1 % 2) == 0) 
    {
        return true;
    } 
     else 
    {
        return false; 
    }
}

int main ()   // execution start from here 
{

    int iValue = 0;
    bool bRet =  false; // false is defualt value for bool  -- 0

    printf("Enter number \n");
    scanf("%d" , &iValue);

     bRet = CheckEven(iValue);  // dukanat gelo  goes  line no 5
    
    if(bRet)       // This means exactly the same as: if (bResult == true)
    {
        printf("it is  Even \n");
    } 
    else 
    {
        printf("it is Odd \n");
    }

    return EXIT_SUCCESS;
}