/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program4.c
//  Description :  write a program to find Odd factorial of given number             
//
//  Input :       10
//  Ouput :       945(9 * 7 * 5 * 3 * 1)
//
//  Author :       Akshay Jadhav
//  Date :         14/05/2025
//
//  Time Complexity : O(n)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iResult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iResult = iResult * iCnt;
        }
    }

    return iResult;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n",iRet);

    return 0;

}

