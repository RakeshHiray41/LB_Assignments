#include<stdio.h>

void DisplayDigits(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        int digit = iNo % 10; 
        printf("%d\n", digit); 
        iNo /= 10; 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return 0;
}