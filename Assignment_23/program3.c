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

void Display(char ch)
{
    int iCnt = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(iCnt = ch; iCnt <= 'Z'; iCnt++,ch++)
        {
            printf("%c\t",ch);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(iCnt = ch; iCnt >= 'a';iCnt--,ch--)
        {
            printf("%c\t",ch);
        }
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Charecter : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}