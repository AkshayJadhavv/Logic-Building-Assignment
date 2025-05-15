/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program2.c
//  Description :  Accept Single Digit number From user and Print into word
//
//  Input   :      Enter number : 5
//  Output :       Five
//
//  Author :       Akshay Jadhav
//  Date :         14/05/2025
//
//  Time Complexity : O(1)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayWord(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    switch(iNo)
    {
        case 0 : printf("Zero");
        break;
        case 1 : printf("One");
        break;
        case 2 : printf("Two");
        break;
        case 3 : printf("Three");
        break;
        case 4 : printf("Four");
        break;
        case 5 : printf("Five");
        break;
        case 6 : printf("Six");
        break;
        case 7 : printf("Seven");
        break;
        case 8 : printf("Eight");
        break;
        case 9 : printf("Nine");
        break;
        default:
            printf("invalid number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayWord(iValue);

    return 0;

}
