/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program3.c
//  Description :  program which accept number from user and return the count of digits           
//                  between 3 and 7
//
//  Input :      45236
//  Ouput :      Frequency between 3 & 7 digit is : 3
//
//  Author :       Akshay Jadhav
//  Date :         16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountRange(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Frequency between 3 and 7 digit is : %d\n",iRet);

    return 0;
}


