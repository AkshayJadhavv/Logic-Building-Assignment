/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program2.c
//  Description :  Accept amount in US dollar and return its corresponding value in indian
//                 currency consider 1$ as 70 Rupees
//
//  Input :       10$
//  Ouput :       700INR
//
//  Author :       Akshay Jadhav
//  Date :         14/05/2025
//
//  Time Complexity : O(1)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToInr(int iNo)
{
    int iRate = 70;
    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iResult = iRate * iNo;

    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToInr(iValue);

    printf("Value in INR is %d\n",iRet);



    return 0;

}

