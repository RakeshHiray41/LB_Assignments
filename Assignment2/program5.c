///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   check whether number is even or odd
//  Author :        Rakesh Sudhakar Hiray
//  Date :          11/05/2025
//
///////////////////////////////////////////////////////
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet = CheckEvenOdd(iValue);
    if(bRet == TRUE)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);
    }
    
    return 0;
}