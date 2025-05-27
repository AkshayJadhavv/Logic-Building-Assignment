/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program5.c 
//  Description : Accpet number from user and display pattern
//
//  Input :  8
//  Output : 2  4  8  10  12  14  16  
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
        printf("%d\t",iMulti);
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