/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program5.c 
//  Description : Accept N number from user and Display all such number which are 
//                Multiples of 11
//
//  Input :     N : 6
//              Elements : 85 66 3 12 55 88
//
//  Output :  66 55 85	        	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 02-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) % 11 == 0)
        {
            printf("Multiplies of 11 : %d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0, iCnt = 0;

    printf("Number of Elments you want in an array : ");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    printf("Enter elements : ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       printf("Enter element %d : ",iCnt+1);
       scanf("%d",&iPtr[iCnt]);
    }

    Display(iPtr,iLength);

    free(iPtr);

    return 0;
}    