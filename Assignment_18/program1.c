/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program1.c 
//  Description : Accept N number from user and return difference between sum of Even
//                  and sum of Odd 
//
//  Input :     N : 6
//              Elements : 85 66 3 80 93 88
//
//  Output :  53 (234 - 181)	        	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 27-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iEvenSum = 0, iOddSum = 0;
    int iDiff = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("No element");
    }
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }

    iDiff = iEvenSum - iOddSum;

    return iDiff;

}

int main()
{
    int iLength = 0, iRet = 0;
    int iCnt = 0;
    int *iPtr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to locate memory");
        return -1;
    }
    
    printf("Enter %d elements \n",iLength);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Difference(iPtr, iLength);

    printf("Difference between Even Sum and Odd sum : %d",iRet);

    free(iPtr);

    return 0;
}