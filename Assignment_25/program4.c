/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program4.c 
//  Description : Write a program which accepts string from user and display only
//                digits from that string 
//
//  Input :  Marvellos2025
//  Output : 2025
//
//  Auhtor : Akshay Jadhav
//  Date : 06-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != 0)
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        str++;
    }

}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
}