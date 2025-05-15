/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program2.c
//  Description :  program which accepts number from user and check whether it contains  
//                 0 in it or not
//
//  Input :      23455
//  Ouput :      There is no zero
//
//  Author :       Akshay Jadhav
//  Date :         16/05/2025
//
//  Time Complexity : 
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
//#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            //return true;
            return TRUE;
        }

        iNo = iNo / 10;
    }

    //return false;
    return FALSE;
}

int main()
{
    int iValue = 0;
    //bool bRet = false;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("There is zero ");
    } 
    else
    {
        printf("There is no zero");
    }

}


