/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program3.c
//  Description :  Program which accept number from user and print number till that number   
//
//  Input   :      Enter number : 4
//  Output :       -4 -3 -2 -1 0 1 2 3 4  
//
//  Author :       Akshay Jadhav
//  Date :         14/05/2025
//
//  Time Complexity : O(n)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayNumberLine(int iNo)
{
   int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
   for(iCnt = -iNo; iCnt <= iNo; iCnt++)
   {
       printf("%d ",iCnt);
   }

}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayNumberLine(iValue);

    return 0;

}
