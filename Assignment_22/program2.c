/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program2.c 
//  Description : Accept Charecter from user and check whether it is Capital case  or
//                not (A-Z)
//
//  Input :   A       |     a
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

BOOL Capital(char ch)
{
    BOOL bFlag = FALSE;

    if(ch >= 'A' && ch <= 'Z')
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

    bRet = Capital(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital character");
    }
    else
    {
        printf("It is not capital character");
    }

    return 0;
}