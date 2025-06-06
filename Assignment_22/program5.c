/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : program5.c 
//  Description : Accept division of student from user and depending on the division display
//               exam timing. There are 4 divisions in school as A, B, C, D. 
//               Exam of division A is at 7:00 AM, B at 8:30 AM, C at 9:20 AM and D at 10:30 AM. 
//               Application should be case insensitive.
//
//  Input :   A
//  Output :   Exam of division A is at 7:00 AM	 	 	   
//
//  Auhtor : Akshay Jadhav
//  Date : 03-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


void Display(char ch)
{

    if(ch == 'A')
    {
        printf("Exam of division A is at 7:00 AM\n");
    }
    else if(ch == 'B')
    {
        printf("Exam of division B is at 8:30 AM\n");
    }
    else if(ch == 'C')
    {
        printf("Exam of division C is at 9:20 AM\n");
    }
    else if(ch == 'D')
    {
        printf("Exam of division D is at 10:30 AM\n");
    }
    else
    {
        printf("Enter valid Division\n");
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter Divison from following : A\t B\t C\t D\t \n");

    printf("Enter Divison : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}