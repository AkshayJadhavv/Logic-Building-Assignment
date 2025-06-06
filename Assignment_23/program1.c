/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program1.c 
//  Description : Write a program which displays ASCII table. Table contains symbol,
//               Decimal, Hexadecimal and Octal representation of every
//              member from 0 to 255.
//
//  Input :   
//  Output :          	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 03-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("--------------------------------------------------------\n");
    printf("| Symbol | Decimal | Hexadecimal | Octal               |\n");
    printf("--------------------------------------------------------\n");

    for(iCnt = 0; iCnt < 256; iCnt++)
    {
        if(iCnt >= 32 && iCnt <= 126)
            printf("|   %c    |   %3d   |     %02X      |   %03o             |\n", iCnt, iCnt, iCnt, iCnt);
        else
            printf("|   -    |   %3d   |     %02X      |   %03o             |\n", iCnt, iCnt, iCnt);
    }

    printf("--------------------------------------------------------\n");
}

int main()
{
    DisplayASCII();

    return 0;
}