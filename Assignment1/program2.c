///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   print to 5 time "Marvellous" on screen
//  Author :        Rakesh Sudhakar Hiray
//  Date :          11/05/2025
//
/////////////////////////////////////////////////////
#include <stdio.h>
void Display()
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Marvellous\n");
    }
}
int main()
{
    Display();
    return 0;
}