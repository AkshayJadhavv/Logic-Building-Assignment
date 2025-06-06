/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program2.c 
//  Description : Accept N number from user and Display all such number which are 
//                 Divisible by 5
//
//  Input :     N : 6
//              Elements : 85 66 3 80 93 88
//
//  Output :  85 80	        	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 30-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Diplay(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0)
        {
            printf("Number that are divided by 5 are : %d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int *iPtr = NULL;
    int iCnt = 0, iLength = 0;

    printf("Enter number of elements you want in Array : ");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    printf("Enter %d Elements : \n",iLength);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    Diplay(iPtr, iLength);

    free(iPtr);

    return 0;
}