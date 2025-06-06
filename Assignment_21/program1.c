/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program1.c 
//  Description : Accept N number from user and return largest number
//
//  Input :     N : 6
//              Elements : 55 66 3 76 13 88 
//
//  Output :  88 	        	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 03-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LargestNum(int Arr[], int iSize)
{
    int iCnt = 0;

    int iLarge = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iLarge)
        {
            iLarge = Arr[iCnt];
        }
    }
    return iLarge;
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

    iRet = LargestNum(iPtr, iLength);

    printf("Largest number : %d",iRet);

    free(iPtr);

    return 0;
}