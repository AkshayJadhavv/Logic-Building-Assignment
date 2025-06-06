/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program2.c 
//  Description : Accept N number from user and return Smallest number
//
//  Input :     N : 6
//              Elements : 55 66 3 76 13 88 
//
//  Output :  3	        	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 03-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int SmallestNum(int Arr[], int iSize)
{
    int iCnt = 0;

    int iSmall = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }
    }
    return iSmall;
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elements you want : ");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));
    if(iPtr == NULL)
    {
        printf("Memory allocation failed!\n");
        return -1;
    }

    printf("Enter Elemenst \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = SmallestNum(iPtr, iLength);

    printf("Smallest number : %d",iRet);

    free(iPtr);

    return 0;
}