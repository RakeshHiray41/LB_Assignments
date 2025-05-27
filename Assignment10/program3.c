#include<stdio.h>

int  CountRange(int iNo)
{
  int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        int digit = iNo % 10; 
      
           iSum ++ ; 
       
        iNo /= 10; 
    }
    return iSum;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

   iRet = CountRange(iValue);

   printf("%d", iRet);

    return 0;
}