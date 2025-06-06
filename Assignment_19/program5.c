/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program5.c 
//  Description : Accept N number from user and accept one another number as No
//               and  return frequency of that No
//
//  Input :     N : 7
//              Elements : 85 11 32 11 93 11 99 
//              Number : 11
//
//  Output :  3 	        	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 02-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int Count(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;
    int iValue = 0;

    printf("Enter Number of elements you want in Array : ");
    scanf("%d",&iLength);

    printf("Enter Number you want frquency of : ");
    scanf("%d",&iValue);

    iPtr = (int *)malloc(iLength * sizeof(int));

    printf("Enter Elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Count(iPtr, iLength, iValue);

    printf("Frequency of %d is : %d\n",iValue,iRet);

    free(iPtr);

    return 0;
}