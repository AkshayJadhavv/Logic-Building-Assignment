/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program5.c 
//  Description : Accept character from user and display its ASCII value in decimal,
//               octal and hexadecimal format
//
//  Input :   
//  Output :          	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 04-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal\tOctal\tHexadecimal\n");
    printf("%d\t%o\t0X%X\n", ch, ch, ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter Charecter : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}