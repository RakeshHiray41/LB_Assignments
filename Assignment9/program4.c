#include<stdio.h>

int  CountFour(int iNo)
{
  int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        int digit = iNo % 10; 
        if(digit == 4)
        {
           iSum ++ ; 
        }
        iNo /= 10; 
    }
    return iSum;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

   iRet = CountFour(iValue);

   printf("%d", iRet);

    return 0;
}