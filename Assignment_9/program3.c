/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program3.c
//  Description :  program which accept number from user and count frequency of 2 in it 
//                 
//
//  Input :      4523
//  Ouput :      Frequency of 2 is : 1
//
//  Author :       Akshay Jadhav
//  Date :         16/05/2025
//
//  Time Complexity : 
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountTwo(int iNo)
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
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("Frequency of 2 is : %d\n",iRet);

    return 0;
}


