/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program2```````````````````````````````````````````````````````````````````````````````````````.c
//  Description :  program which accept number from user and return the count of odd digits           
//
//  Input :      4523
//  Ouput :      Frequency of odd digit is : 2
//
//  Author :       Akshay Jadhav
//  Date :         16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountOdd(int iNo)
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

    iRet = CountOdd(iValue);

    printf("Frequency of odd digit is : %d\n",iRet);

    return 0;
}


