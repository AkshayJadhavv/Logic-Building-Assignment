/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program4.c 
//  Description : Accept N number from user and Display all such number which contains
//                  3 Digit in it
//
//  Input :     N : 6
//              Elements : 112 342 623 876 132 999 
//
//  Output :  342 623 132 	        	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 03-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Digit(int Arr[], int iSize)
{
    int iCnt = 0, iDigit = 0, iNo = 0;
    

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        int iNo = Arr[iCnt];
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 3)
            {
                printf("%d\t",Arr[iCnt]);
                break;
            }
            iNo = iNo / 10;
        }
    }
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

    Digit(iPtr, iLength);

    free(iPtr);

    return 0;
}