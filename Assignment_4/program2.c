/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program2.c
//  Description :  Program which accept number from user and Display its factors in  
//                 Decreasing order
//  Input   :      Enter number : 12
//  Output :       6 4 3 2 1
//
//  Author :       Akshay Jadhav
//  Date :         14/05/2025
//
//  Time Complexity : O(n)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
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

    DisplayFactRev(iValue);

    return 0;

}
