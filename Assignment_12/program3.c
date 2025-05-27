/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program3.c 
//  Description : Accpet number from user and display pattern
//
//  Input :  iRow = 3  iCol = 5
//  Output :   5  4  3  2  1
//             5  4  3  2  1
//             5  4  3  2  1
//
//  Auhtor : Akshay Jadhav
//  Date : 19-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }  
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of Coulmns : ");
    scanf("%d",&iValue2);

    DisplayPattern(iValue1,iValue2);

    return 0;
}