/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program5.c
//  Description :  write a program which accept area in square feet and convert 
//                 it into square meter. (1 Square feet = 0.0929 Square meter)
//
//  Input :      5
//  Ouput :      0.464500
//
//  Author :       Akshay Jadhav
//  Date :         15/05/2025
//
//  Time Complexity : O(1)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(float fSquareFeet)
{
    float fSquareMeter = 0.0;

    fSquareMeter = fSquareFeet * 0.0929;

    return fSquareMeter;


}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("SquareMeter : %lf",dRet);

    return 0;

}

