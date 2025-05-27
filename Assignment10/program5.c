#include<stdio.h>

int  CountDiff(int iNo)
{
  int iSum1 = 0 , iSum2 = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        int digit = iNo % 10; 
        if(digit % 2 == 0)
        {
         
           iSum1 += digit; 
        }
        else
        {
           iSum2+= digit; 
           
        }
        iNo /= 10; 
    }
    return iSum1 - iSum2;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

   iRet = CountDiff(iValue);

   printf("%d", iRet);

    return 0;
}