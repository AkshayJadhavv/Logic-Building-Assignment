/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program2.c 
//  Description : Write a program which accepts string from user and count number of
//               small charecter.
//
//  Input :  MarVellouS
//  Output :  7      	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 06-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(Arr);

    printf("Number of Small charecter are : %d\n",iRet);

    return 0;
}