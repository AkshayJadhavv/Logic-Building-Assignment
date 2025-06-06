/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program1.c 
//  Description : Accept N number from user and return frequency of even number 
//
//  Input :     N : 6
//              Elements : 85 66 3 80 93 88
//
//  Output :  3 	        	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 02-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
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

    printf("Enter Number of elements you want in Array : ");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    printf("Enter Elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = CountEven(iPtr, iLength);

    printf("Even Numbers Count is : %d\n",iRet);

    free(iPtr);

    return 0;
}