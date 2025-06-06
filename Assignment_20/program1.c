/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program1.c 
//  Description : Accept N number from user and accept one another number as No
//               and check if that No is present or not
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

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            //bFlag = TRUE;
            break;
        }
    }

    //return bFlag;

    if(iCnt != iSize)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int *iPtr = NULL;
    int iValue = 0, iLength = 0, iCnt = 0;
    BOOL bRet = FALSE;

    printf("Enter number of elments in array : ");
    scanf("%d",&iLength);

    printf("Enter the number you want Check : ");
    scanf("%d",&iValue);

    iPtr = (int *)malloc(iLength * sizeof(int));

    printf("Enter %d Elements : \n",iLength);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    bRet = Check(iPtr, iLength, iValue);

    if(bRet == TRUE)
    {
        printf("%d is present",iValue);
    }
    else
    {
        printf("%d is not present",iValue);
    }

    free(iPtr);

    return 0;
}