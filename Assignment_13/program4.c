/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program4.c 
//  Description : Accpet number from user and display pattern
//
//  Input :  iRow = 4  iCol = 5
//  Output :   4  4  4  4  4
//             3  3  3  3  3
//             2  2  2  2  2
//             1  1  1  1  1
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

    for(i = iRow; i >= 1; i--)
    {
        for(j = 0; j < iCol; j++)
        {
            if((i % 2) == 0)
            {
                printf("%d\t",i);
            }
            else
            {
                printf("%d\t",i);
            }
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