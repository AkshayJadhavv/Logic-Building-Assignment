/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program5.c 
//  Description : Accpet number from user and display pattern
//
//  Input :  iRow = 4  iCol = 5
//  Output :   1  2   3   4  
//             5  6   7   8
//             9  10  11  12
//
//  Auhtor : Akshay Jadhav
//  Date : 19-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern1(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iSum = 0;

    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            iSum = iSum + 1;
            printf("%d\t",iSum);
        }
        printf("\n");
    }
    printf("\n");
}

void DisplayPattern2(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iNum = 1;

    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iNum);
            iNum++;
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

    DisplayPattern1(iValue1,iValue2);
    DisplayPattern2(iValue1,iValue2);

    return 0;
}