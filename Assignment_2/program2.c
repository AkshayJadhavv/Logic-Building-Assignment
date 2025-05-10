/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    program2.c
//  Description :  Accept one number from user and print that number of * on screen
//  Author :       Akshay Jadhav
//  Date :         10/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    while(iNo > 0)
    {
        printf("*\n");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
