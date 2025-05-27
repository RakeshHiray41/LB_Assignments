#include<stdio.h>

int  CountEven(int iNo)
{
  int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        int digit = iNo % 10; 
        if(digit % 2 ==0)
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

   iRet = CountEven(iValue);

   printf("%d", iRet);

    return 0;
}