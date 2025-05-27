/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program2.c 
//  Description : Accpet number from user and display pattern
//
//  Input :  iRow = 4  iCol = 4
//  Output :   2  4  6  8  10  
//             1  3  5  7  9
//             2  4  6  8  10
//             1  3  5  7  9
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
    int iEvenSum = 0;
    int iOddSum = 0;
    

    for(i = 0; i < iRow; i++)
    {
        for(j = 1,iEvenSum = 2,iOddSum = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",iEvenSum);
                iEvenSum = iEvenSum + 2;
            }
            else    
            {
                printf("%d\t",iOddSum);
                iOddSum = iOddSum + 2;
            }     
        }
        printf("\n");
    }
    printf("\n");
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