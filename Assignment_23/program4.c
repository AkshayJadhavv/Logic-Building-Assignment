/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program3.c 
//  Description : Accept character from user. If it is capital then display all the 
//               characters from the input character till Z. If input character 
//               is small then print all the characters in reverse order till a.  
//               In other cases return directly.
//
//  Input :   W
//  Output :   W X Y Z       	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 04-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Charecter : ");
    scanf("%c",&cValue);

    bRet = Check(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special Charecter\n");
    }
    else
    {
        printf("It is not Special Charecter\n");
    }

    return 0;
}