/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program3.c 
//  Description : Accept Charecter from user and check whether it is Digit  or
//                not (0-9)
//
//  Input :   1       |     a
//  Output :   TRUE	  |     FALSE	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 03-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Digit(char ch)
{
    BOOL bFlag = FALSE;

    if(ch >= '0' && ch <= '9')
    {
        bFlag = TRUE;
    }
    return bFlag;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter charecter : ");
    scanf("%c",&cValue);

    bRet = Digit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not Digit");
    }

    return 0;
}