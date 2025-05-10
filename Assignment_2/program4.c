/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program4.c
//  Description :  Accept two numbers from user and display first number in second
//                 number of times 
//  Author :       Akshay Jadhav
//  Date :         10/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d ", iNo);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}

