/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program3.c 
//  Description : Accpet number from user and display pattern
//
//  Input :  5
//  Output :  5  *  4  *  3  *  2  *  1  * 
//
//  Auhtor : Akshay Jadhav
//  Date : 19-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DisplayPattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter your number : ");
    scanf("%d",&iValue);

    iRet = DisplayPattern(iValue);

    return 0;
}