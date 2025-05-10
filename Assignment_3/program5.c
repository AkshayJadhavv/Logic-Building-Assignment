/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program5.c
//  Description :  Program to check whether a character is a vowel or not
//  Author :       Akshay Jadhav
//  Date :         10/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    // Convert to lowercase to handle uppercase input
    if (cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
    }

    if (cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf(" %c", &cValue);  // Added space before %c to ignore newline

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}

