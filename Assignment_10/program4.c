/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program4.c
//  Description :  program which accept number from user and return multiplication of all           
//                 digits
//
//  Input :      2395
//  Ouput :      Multiplication of all digits : 270
//
//  Author :       Akshay Jadhav
//  Date :         16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultiDigits(int iNo)
{
    int iMulti = 1;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        iMulti = iMulti * iDigit;

        iNo = iNo / 10;
    }

    return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("Multiplication of all digits : %d\n",iRet);

    return 0;
}


