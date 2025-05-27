#include<stdio.h>
int FactDiff(int iNo)
{
  int iCnt =  0;
  int iSum1 = 0;
  int iSum2 = 0;
  int iSum3 = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  for(iCnt = 1; iCnt < iNo; iCnt++)
  {
    if((iNo % iCnt) == 0)
    {
      iSum1 = iSum1 + iCnt;
      
    }
    else
    {
      iSum2 = iSum2 + iCnt;

    }
  }
  iSum3 = iSum1 - iSum2;
   return iSum3;
}
int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Enter the number\n");
  scanf("%d",&iValue);

  iRet=FactDiff(iValue);
  printf("%d",iRet);
  return 0;
}