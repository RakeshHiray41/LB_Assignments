
///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   print that number of * on screen
//  Author :        Rakesh Sudhakar Hiray
//  Date :          11/05/2025
//
/////////////////////////////////////////////////////
#include <stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int iValue = 0;
    iValue=5;
    Display(iValue);
    return 0;
}