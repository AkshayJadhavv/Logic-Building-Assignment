/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program1.c
//  Description :  write a program which accept radius of circle from user and calculate its 
//                 area. Consider value of PI as 3.14(Area = PI * Radius * Radius)
//
//  Input :       5.3
//  Ouput :       88.2026
//
//  Author :       Akshay Jadhav
//  Date :         15/05/2025
//
//  Time Complexity : O(1)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double dArea = 0;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Circle area : %.4lf\n",dRet);

    return 0;

}

