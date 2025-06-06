/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program2.c 
//  Description : Accept N number from user and return difference between
//               frequency of even number and odd number 
//
//  Input :     N : 7
//              Elements : 85 66 32 80 93 88 90
//
//  Output :  1(4-3) 	        	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 02-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iDiff = 0;
    int iEven = 0, iOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }

    iDiff = iEven - iOdd;

    return iDiff;
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter Number of elements you want in Array : ");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    printf("Enter Elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Difference(iPtr, iLength);

    printf("Difference between Even and Odd : %d\n",iRet);

    free(iPtr);

    return 0;
}