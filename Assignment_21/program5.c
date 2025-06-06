/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program5.c 
//  Description : Accept N number from user and Display Summation of digit of each number
//
//  Input :     N : 6
//              Elements : 21 46 57 11 88 91 
//
//  Output :  3(2+1)  10(4+1)  12(5+7)  2(1+1)  16(8+8)  10(9+1) 	        	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 03-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void SumDigit(int Arr[], int iSize)
{
    int iCnt = 0, iDigit = 0, iNo = 0, iSum = 0;
    

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("%d\t",iSum);
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

    SumDigit(iPtr, iLength);

    free(iPtr);

    return 0;
}