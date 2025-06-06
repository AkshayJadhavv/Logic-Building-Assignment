/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program3.c 
//  Description : Accept N number from user and Display all such number which are 
//                even and Divisible by 5
//
//  Input :     N : 6
//              Elements : 85 66 3 80 93 88
//
//  Output :  80	        	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 30-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(((Arr[iCnt] % 5) == 0) && ((Arr[iCnt] % 2) == 0))
        {
            printf("Number Which are Even And divided by 5 : %d",Arr[iCnt]);
        }
    }
}

int main()
{
    int *iPtr = NULL;
    int iCnt = 0, iLength =0;

    printf("Enter number of element you want in array : ");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    printf("Enter %d elements : \n",iLength);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d : ",iCnt);
        scanf("%d",&iPtr[iCnt]);
    } 

    Display(iPtr, iLength);

    free(iPtr);

    return 0;
}