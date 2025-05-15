/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program5.c
//  Description :  program which accept number from user and return multiplication of all           
//                 digits
//
//  Input :      5733
//  Ouput :      -18(0 - 18)
//
//  Author :       Akshay Jadhav
//  Date :         16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDigit = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2 ) == 0)
        {
           iEvenSum = iEvenSum + iDigit;  
        }
        else
        {
            iOddSum = iOddSum + iDigit; 
        }

        iNo = iNo / 10;
    }

    iDiff = iEvenSum - iOddSum;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d\n",iRet);

    return 0;
}


