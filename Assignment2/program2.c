
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
    
    //while updater
    while(iNo > 0 )
    {
        printf("*\n");
         iNo--;
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