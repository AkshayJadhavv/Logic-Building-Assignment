/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program3.c 
//  Description : Write a program which accepts string from user and toggle the case 
//
//  Input :  MarveLLous Multi OS
//  Output : mARVEllOUS mULTI os
//
//  Auhtor : Akshay Jadhav
//  Date : 06-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void struprX(char *str)
{
    while(*str != 0)
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }

}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);

    printf("Updated String is : %s\n",Arr);

    return 0;
}