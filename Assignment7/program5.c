#include<stdio.h>

int FactorialDiff(int iNo)
{
  int iCnt = 0, iFact = 1, iFact1 = 1;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  for (iCnt = 2 ; iCnt<= iNo; iCnt ++) 
  {
    if((iCnt % 2) == 1)
    {
      iFact *= iCnt;
    }
    else
    {
      iFact1 *= iCnt;
    }
  }

  return iFact1 - iFact;
}

int main()
{
int iValue = 0, iRet = 0;

printf("Enter number:");
scanf("%d", &iValue);

iRet = FactorialDiff(iValue);

printf("Factorial difference is: %d", iRet);
return 0;
}