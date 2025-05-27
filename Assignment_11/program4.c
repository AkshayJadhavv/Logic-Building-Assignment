/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program4.c 
//  Description : Accpet number from user and display pattern
//
//  Input :  5
//  Output :  # 5  *  #  4  *  #  3  *  #  2  *  #  1  *  
//
//  Auhtor : Akshay Jadhav
//  Date : 19-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DisplayPattern(int iNo)
{
    int iCnt = 0;
    int iMulti = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMulti = iCnt * 2;
        printf("#\t%d\t*\t",iCnt);
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