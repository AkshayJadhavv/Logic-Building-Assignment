/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program2.c
//  Description :  Program to print even factors of a given number
//  Author :       Akshay Jadhav
//  Date :         10/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo / 2; i++)
    {
        if(iNo % i == 0 && i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}

