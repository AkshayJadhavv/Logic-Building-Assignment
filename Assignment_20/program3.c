/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program3.c 
//  Description : Accept N number from user and accept one another number as No
//               and return index of Last occurnce of that No
//
//  Input :     N : 6
//              Number : 66
//              Elements : 85 66 3 66 93 88 
//
//  Output :  3 	        	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 02-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int LastOccur(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iIndex = -1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
        }
    }
    return iIndex;
    
}

int main()
{
    int *iPtr = NULL;
    int iValue = 0, iLength = 0, iCnt = 0;
    int iRet = 0;

    printf("Enter number of elments in array : ");
    scanf("%d",&iLength);

    printf("Enter the number you want Check : ");
    scanf("%d",&iValue);

    iPtr = (int *)malloc(iLength * sizeof(int));
    if(iPtr == NULL) 
    {
        printf("Memory allocation failed!\n");
        return -1;
    }

    printf("Enter %d Elements : \n",iLength);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter Element %d : ",iCnt);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = LastOccur(iPtr, iLength, iValue);
    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurence number is : %d",iRet);
    }

    free(iPtr);

    return 0;
}