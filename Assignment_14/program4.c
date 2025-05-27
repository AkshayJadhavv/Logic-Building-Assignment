/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program4.c 
//  Description : Accpet number from user and display pattern
//
//  Input :  iRow = 4  iCol = 5
//  Output :   1  2  3  4  5  
//            -1 -2 -3 -4 -5  
//             1  2  3  4  5  
//            -1 -2 -3 -4 -5  
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
 
    for(i = 1; i <= iRow; i++)
    {
         for(j = 1; j <= iCol; j++)
         {
            if(i % 2 != 0)
            {
                printf(" %d\t",j);
            }
            else
            {
                printf("%d\t",-j);
            }    
         }
        printf("\n");
    }   
}

// void DisplayPattern(int iRow,int iCol)
// {
//     int i = 0;
//     int j = 0;
//
//     for(i = 1; i <= iRow; i++)
//     {
//        if(i % 2 != 0)
//        {
//          for(j = 1; j <= iCol; j++)
//          {
//             printf(" %d\t",j);    
//          }
//        }
//        else
//        {
//          for(j = -1; j >= -iCol ; j--)
//          {
//             printf("%d\t",j);    
//          }
//        }
//         printf("\n");
//     }   
// }

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