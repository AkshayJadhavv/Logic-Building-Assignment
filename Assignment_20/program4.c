/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program4.c 
//  Description : Accept N number from user and accept range, Display all elements from
//               that range
//
//  Input :     N : 6
//              Start : 60
//              End : 90
//              Elements : 55 66 3 76 13 88 
//
//  Output :  66 76 88 	        	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 02-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void DisplayRange(int Arr[], int iSize, int iStart, int iEnd)
{
     int iCnt = 0;

     for(iCnt = 0; iCnt < iSize; iCnt++)
     {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
     }
     printf("\n");
}

int main()
{
    int *iPtr = NULL;
    int iValue1 = 0, iValue2 = 0, iLength = 0, iCnt = 0;

    printf("Enter number of elments in array : ");
    scanf("%d",&iLength);

    printf("Enter the starting point : ");
    scanf("%d",&iValue1);

    printf("Enter the Ending point : ");
    scanf("%d",&iValue2);

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

    DisplayRange(iPtr, iLength, iValue1, iValue2);

    free(iPtr);

    return 0;
}