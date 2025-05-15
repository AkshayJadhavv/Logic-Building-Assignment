/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program5.c
//  Description :  program to which accpet number from user and display its table in 
//                  Reverse order
//
//  Input      :    2
//  Output     :  20 18 16 14 12 10 8 6 4 2    
// 
//  Author :      Akshay Jadhav
//  Date :       15/05/2025  
//
//  Time Complexity : O(1)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iTable = 1;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iTable = iNo * iCnt;
        printf("%d ",iTable);    
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}
