/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program1.c 
//  Description : Write a program which accepts string from user and convert it 
//               into lowercase
//
//  Input :  Marvellous Multi OS
//  Output : marvellous multi os 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 06-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != 0)
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    strlwrX(Arr);

    printf("Updated String is : %s\n",Arr);

    return 0;
}