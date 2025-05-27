/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program5.c 
//  Description : Accpet number from user and display pattern
//
//  Input :  iRow = 5  iCol = 5
//  Output :   1	2	3	4	5	
//             1	2	 	 	5	
//             1	 	3	 	5	
//             1	 	 	4	5	
//             1	2	3	4	5	   
//
//  Auhtor : Akshay Jadhav
//  Date : 27-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0, j =0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j || i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows you want to Enter : ");
    scanf("%d",&iValue1);

    printf("Enter number of Columns you want to Enter : ");
    scanf("%d",&iValue2);

    DisplayPattern(iValue1,iValue2);
}