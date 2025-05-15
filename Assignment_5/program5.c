/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program5.c
//  Description :  Program which accept N from user and print 5 multiple 0f N  
//                 up to N
//
//  Input   :      Enter number : 4
//  Output :       4 8 12 16 20  
//
//  Author :       Akshay Jadhav
//  Date :         14/05/2025
//
//  Time Complexity : O(1)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
   int iCnt = 0;
   int iMutli = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
   for(iCnt = 1; iCnt <= 5; iCnt++)
   {
       iMutli = iNo * iCnt;
       printf("%d ",iMutli);
   }

}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;

}
