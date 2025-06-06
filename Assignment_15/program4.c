/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program4.c 
//  Description : Accpet number from user and display pattern
//
//  Input :  iRow = 4  iCol = 4
//  Output :   *	*	*	*	
//             *	@	@	*	
//             *	@	@	*	
//             *	*	*	*
//
//  Auhtor : Akshay Jadhav
//  Date : 27-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || j == 1 || i == iRow || j == iCol)
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
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

    return 0;
}