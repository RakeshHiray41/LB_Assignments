
///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   print that number of * on screen
//  Author :        Rakesh Sudhakar Hiray
//  Date :          11/05/2025
//
///////////////////////////////////////////////////////


#include <stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    while(iCnt < iNo)
    {
        printf("*\n");
         iCnt++;
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