/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program3.c
//  Description :  write a program which accept distance in KM and convert it into  meter 
//                 (1KM = 1000 Meter)
//
//  Input :      5km
//  Ouput :     5000 m
//
//  Author :       Akshay Jadhav
//  Date :         15/05/2025
//
//  Time Complexity : O(1)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(int iKm)
{
    int iMeter = 1000;
    int iResult = 0;

    iResult = iKm * iMeter;

    return iResult;


}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Km : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Meter : %d",iRet);

    return 0;

}

