/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program5.c
//  Description :  Accept one number from user and print that number of * on screen 
//  Author :       Akshay Jadhav
//  Date :         10/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}
