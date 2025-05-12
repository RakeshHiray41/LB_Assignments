
///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   Accept two number from user and display first number in second number of lines
//  Author :        Rakesh Sudhakar Hiray
//  Date :          11/05/2025
//
///////////////////////////////////////////////////////
#include <stdio.h>
void Display(int iNo1, int iFrequency)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d\n", iNo1);
    }
    
}
int main()
{
    int iValue = 0;
    int iCount = 0;
    printf("Enter first number\n");
    scanf("%d",&iValue);
    printf("Enter second number\n");
    scanf("%d",&iCount);
    Display(iValue, iCount);
    return 0;
}