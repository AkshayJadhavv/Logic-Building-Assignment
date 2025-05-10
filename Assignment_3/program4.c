/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program4.c
//  Description :   Program to convert the case of a character 
//  Author :       Akshay Jadhav
//  Date :         10/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c\n", cValue - 32);  // Convert to uppercase
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c\n", cValue + 32);  // Convert to lowercase
    }
    else
    {
        printf("Invalid character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf(" %c", &cValue);  // Space before %c to ignore any whitespace

    DisplayConvert(cValue);

    return 0;
}

