/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program1.c
//  Description :  Program which accept number from user and Display its multiplication of 
//                 factors
//  Author :       Akshay Jadhav
//  Date :         14/05/2025
//
//  Time Complexity : O(n)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMulti = iMulti * iCnt;
        }
    }

    return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d\n",iRet);

    return 0;

}

