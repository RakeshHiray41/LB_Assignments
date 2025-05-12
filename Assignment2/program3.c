
///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   number is less than 10 then print "Hello" otherwise print "Demo"
//  Author :        Rakesh Sudhakar Hiray
//  Date :          11/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}