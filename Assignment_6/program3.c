/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program3.c 
//  Description :  program to find factorial of given number
//
//  Input      :    5
//  Output     :   1 * 2 * 3 * 4 * 5 = 120     
// 
//  Author :    Akshay Jadhav
//  Date :      15/05/2025   
//
//  Time Complexity : O(n)  
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;    
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf(" Factorial of number is %d\n",iRet);

    return 0;
}
