/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program1.c
//  Description :  Program which accept number from user and Display Below pattern  
//
//  Input :       5
//  Ouput :       * * * * * # # # # # 
//
//  Author :       Akshay Jadhav
//  Date :         14/05/2025
//
//  Time Complexity : O(n)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern1(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
        //printf("# ");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        //printf("* ");
        printf("# ");
    }
}

void Pattern2(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo * 2); iCnt++)
    {
        if(iCnt <= iNo)
        {
            printf("* ");
        }
        else
        {
            printf("# ");
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern1(iValue);
    printf("\n");
    Pattern2(iValue);

    return 0;

}

