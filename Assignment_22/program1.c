/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program1.c 
//  Description : Accept Charecter from user and check whether it is alphabet  or
//                not (A-Z  a-z)
//
//  Input :   A       |     #
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

BOOL CheckAlpha(char ch)
{
    BOOL bFlag = FALSE;

    if(((ch >= 'A') && (ch <= 'Z')) || (ch >= 'a') && (ch <= 'z'))
    {
        bFlag = TRUE;
    }

    return bFlag;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter charcter : ");
    scanf("%c",&cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("it is charecter");
    }
    else
    {
        printf("it is not a charecter");
    }

    return 0;

}