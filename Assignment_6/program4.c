/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program4.c
//  Description :  program to which accpet number from user and display its table
//
//  Input      :    2
//  Output     :   2 4 6 8 10 12 14 16 18 20    
// 
//  Author :      Akshay Jadhav
//  Date :       15/05/2025
//
//  Time Complexity : O(1)  
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iTable = 1;

    for(iCnt = 1; iCnt <= 10; iCnt++)
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

    Table(iValue);

    return 0;
}
