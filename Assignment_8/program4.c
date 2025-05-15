/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program4.c
//  Description :  write a program which accept temprature in Fahrenheit and convert it 
//                 into celsius (1 celsius = (Fahrenheit - 32) * (5/9)) 
//
//  Input :       
//  Ouput :      
//
//  Author :       Akshay Jadhav
//  Date :         15/05/2025
//
//  Time Complexity : O(1)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0;
    
    dCelsius = (fTemp - 32) * (5.0/9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0;

    printf("Enter Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Celsius is : %.2lf\n",dRet);

    return 0;

}

