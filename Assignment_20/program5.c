/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program5.c 
//  Description : Accept N number from user and return product of all odd numbers
//               that range
//
//  Input :     N : 6
//              Elements : 54 66 3 76 13 88 
//
//  Output :  39(3 * 13) 	        	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 02-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[], int iSize)
{
     int iCnt = 0, iMulti = 1;

     for(iCnt = 0; iCnt < iSize; iCnt++)
     {
        if((Arr[iCnt] % 2) != 0)
        {
            iMulti = iMulti * Arr[iCnt];
        }
     }
     return iMulti;
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elments in array : ");
    scanf("%d",&iLength);

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

    iRet = Product(iPtr, iLength);

    if(iRet == 1)
    {
        printf("There are no odd numbers\n");
    }
    else
    {
        printf("multiplication of all odd numbers : %d\n",iRet);
    }

    free(iPtr);

    return 0;
}