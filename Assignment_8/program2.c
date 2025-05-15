/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program2.c
//  Description :  write a program which accept width 7 height from user and calculate its 
//                 area. (Area = width * height)
//
//  Input :      Enter width = 5.3;  Enter Height = 9.78
//  Ouput :       51.8340
//
//  Author :       Akshay Jadhav
//  Date :         15/05/2025
//
//  Time Complexity : O(1)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Rectangle area : %lf\n",dRet);

    return 0;

}

