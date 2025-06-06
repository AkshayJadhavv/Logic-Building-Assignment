/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program3.c 
//  Description : Accept N number from user and Check whether that number contains 11
//               in it or not
//
//  Input :     N : 6
//              Elements : 85 66 32 80 93 11 90
//
//  Output :  11 is present 	        	 	 	   
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

BOOL Check(int Arr[], int iSize)
{
    int iCnt = 0;
    //BOOL bRet = FALSE;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            //bRet = TRUE;
            break;
        }
    }
    //return bRet;

    if(iCnt == iSize)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0, iCnt = 0;
    BOOL bRet = FALSE;

    printf("Enter Number of elements you want in Array : ");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    printf("Enter Elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    bRet = Check(iPtr, iLength);

    if(bRet == TRUE)
    {
        printf("11 present in Array");
    }
    else
    {
        printf("11 is not present in Array");
    }

    free(iPtr);

    return 0;
}