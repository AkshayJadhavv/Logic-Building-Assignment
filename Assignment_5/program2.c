/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program2.c
//  Description :  Program which accept number from user and print number till that number   
//
//  Input   :      Enter number : 8
//  Output :       1 2 3 4 5 6 7 8 
//
//  Author :       Akshay Jadhav
//  Date :         14/05/2025
//
//  Time Complexity : O(n)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayNumbers(int iNo)
{
   int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
       printf("%d ",iCnt);
   }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayNumbers(iValue);

    return 0;

}
