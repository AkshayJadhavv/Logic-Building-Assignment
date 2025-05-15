/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program5.c
//  Description :  write a program which returns difference between even factorial and
//                 odd factorial of given number
//
//  Input :       5
//  Ouput :       (8-15) = -7
//
//  Author :       Akshay Jadhav
//  Date :         14/05/2025
//
//  Time Complexity : O(n)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
        else
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }

    iResult = iEvenFact - iOddFact;

    return iResult;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference between even factorial and odd factorial is : %d\n",iRet);

    return 0;

}

