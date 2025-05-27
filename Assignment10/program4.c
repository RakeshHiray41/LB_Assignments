#include<stdio.h>

int  MultDigits(int iNo)
{
  int iMul = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        int digit = iNo % 10; 
        if(digit == 0)
        {
            iNo /= 10; 
        }
        else
        {
          iMul *= digit; 
          iNo /= 10; 
        }
        
    }
    return iMul;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

   iRet = MultDigits(iValue);

   printf("%d", iRet);

    return 0;
}