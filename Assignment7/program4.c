#include<stdio.h>

int OddFactorial(int iNo)
{
  int iCnt = 0, iFact = 1;
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
  }

  return iFact;
}

int main()
{
int iValue = 0, iRet = 0;

printf("Enter number:");
scanf("%d", &iValue);

iRet = OddFactorial(iValue);

printf("Odd Factorial of number is: %d", iRet);
return 0;
}