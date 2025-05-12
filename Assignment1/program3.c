///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   to print 5 to 1 numbers on screen
//  Author :        Rakesh Sudhakar Hiray
//  Date :          11/05/2025
//
/////////////////////////////////////////////////////
#include <stdio.h>
void Display()
{
    int i = 5;
   while(i >0)
    {
        printf("%d\n",i);
        i--;
    }
}
int main()
{
    Display();
    return 0;
}