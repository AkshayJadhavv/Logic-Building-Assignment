/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program3.c 
//  Description : Write a program which accepts string from user and returns differne
//               betweem frequency of small charecter and capital charecter.
//
//  Input :  MARVelloUS
//  Output : 2 (6 - 4)	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 06-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
    int iCountCap = 0, iCountSmall = 0, iDiff = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        str++;
    }

    iDiff = iCountCap - iCountSmall;

    return iDiff;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("frequency of small charecter and capital charecter are : %d\n",iRet);

    return 0;
}