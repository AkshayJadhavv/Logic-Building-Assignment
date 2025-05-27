/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program2.c 
//  Description : Accpet number from user and display pattern
//
//  Input :  iRow = 3  iCol = 5
//  Output :   A  A  A  A  A
//             B  B  B  B  B
//             C  C  C  C  C
//             
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

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%c\t",'A' + i);
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