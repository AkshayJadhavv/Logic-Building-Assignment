/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program4.c
//  Description :  Program which accept N from user and print all odd numbers    
//                 up to N
//
//  Input   :      Enter number : 18
//  Output :       1 3 5 7 9 11 13 15 17  
//
//  Author :       Akshay Jadhav
//  Date :         14/05/2025
//
//  Time Complexity : O(n)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int iNo)
{
   int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
       if((iCnt % 2) != 0)
       {
            printf("%d ",iCnt);
       }
   }

}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;

}
