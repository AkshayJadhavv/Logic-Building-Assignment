/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program1.c 
//  Description : Write a program which accepts string from user and count number of
//               capital charecter.
//
//  Input :  Jay Ganesh
//  Output :  2       	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 06-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCapital(Arr);

    printf("Number of capital charecter are : %d\n",iRet);

    return 0;
}