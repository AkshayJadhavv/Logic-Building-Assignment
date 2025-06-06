/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program4.c 
//  Description : Write a program which accepts string from user and checks 
//               whther it contains vowels in it or not 
//
//  Input :  MarVellouS
//  Output : TRUE      	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 06-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckVowel(char *str)
{
    BOOL bFlag = FALSE;
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            bFlag = TRUE;
        }
        str++;
    }

    return bFlag;
}

int main()
{
    char Arr[50] = {'\0'};
    BOOL bRet = FALSE;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckVowel(Arr);

    if(bRet == TRUE)
    {
        printf("It contains vowels");
    }
    else
    {
        printf("It does not contains vowels");
    }

    return 0;
}