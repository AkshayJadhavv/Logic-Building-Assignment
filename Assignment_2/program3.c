/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program3.c
//  Description :  Accept one number from user if number is less than 10 then print "Hello" 
//                 otherwise print "Demo"  
//  Author :       Akshay Jadhav
//  Date :         10/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}

