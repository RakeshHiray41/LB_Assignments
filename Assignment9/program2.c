#include<stdio.h>
#define TRUE 1
#define FALSE 0 

typedef int BOOL;

BOOL ChkZero(int iNo)
{
   BOOL flag = FALSE;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        int digit = iNo % 10; 
        if(digit == 0)
        {
            flag = TRUE;
            break;
        }
        iNo /= 10; 
    }
    return flag;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number: ");
    scanf("%d", &iValue);

  bRet = ChkZero(iValue);

  if(bRet == TRUE)
    {
        printf("It Contains Zero.\n");
    }
    else
    {
        printf("There is no zero .\n");
    }

    return 0;
}