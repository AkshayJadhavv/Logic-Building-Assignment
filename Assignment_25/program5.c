/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program5.c 
//  Description : Write a program which accepts string from user and count number
//                of white spaces
//
//  Input :  Marvellos OS 2025
//  Output : 2
//
//  Auhtor : Akshay Jadhav
//  Date : 06-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSpaces(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpaces(Arr);

    printf("Number of white space are : %d\n",iRet);

    return 0;
}