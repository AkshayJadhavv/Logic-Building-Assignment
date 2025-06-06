/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program4.c 
//  Description : Accept Charecter from user and check whether it is Small Case  or
//                not (A-Z)
//
//  Input :   a       |     A
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

    if(ch >= 'a' && ch <= 'z')
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
        printf("It is small character");
    }
    else
    {
        printf("It is not small character");
    }

    return 0;
}