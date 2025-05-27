#include <stdio.h>
int Factorial(int iNo)
{
  int iCnt=0;
  int iFact=1;
  if(iNo<0)
  {
    iNo=-iNo;
  }
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    iFact=iFact*iCnt;
  }
  return iFact;
}
int main()
{
  int iVlaue=0;
  int iRet=0;
  printf("Enter the number:");
  scanf("%d",&iVlaue);
  iRet=Factorial(iVlaue);
  printf("Factorial of number is :%d\n",iRet);
  return 0;
}