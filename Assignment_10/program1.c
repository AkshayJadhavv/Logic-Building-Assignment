/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program1.c
//  Description :  program which accept number from user and return the count of even digits           
//
//  Input :      45236
//  Ouput :      Frequency of even digit is : 3
//
//  Author :       Akshay Jadhav
//  Date :         16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountEven(int iNo)
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
        if((iDigit % 2) == 0)
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

    iRet = CountEven(iValue);

    printf("Frequency of Even digit is : %d\n",iRet);

    return 0;
}


