/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program3.c 
//  Description : Accpet number from user and display pattern
//
//  Input :  iRow = 4  iCol = 4
//  Output :   a  b  c  d  
//             1  2  3  4  
//             a  b  c  d  
//             1  2  3  4  
//
//  Auhtor : Akshay Jadhav
//  Date : 22-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'a'; j <= iCol; j++,ch++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",ch);
            }
            else
            {
                printf("%d\t",j);
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