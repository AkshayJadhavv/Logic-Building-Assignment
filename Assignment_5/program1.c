/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program1.c
//  Description :  Program which accept number from user and print that number of $ and *     
//                 on screen 
//
//  Input   :      Enter number : 5
//  Output :       $ *  $ *  $ *  $ *  $ * 
//
//  Author :       Akshay Jadhav
//  Date :         14/05/2025
//
//  Time Complexity : O(n)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iNo)
{
   int iCnt = 0; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
       printf(" $ * ");
   }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;

}
