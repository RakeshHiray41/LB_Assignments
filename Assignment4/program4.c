

#include <stdio.h>
int SumNonFact(int iNo)
{
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  int iCnt=0;
  int iSum=0;
  for(iCnt = 1;iCnt <=iNo ; iCnt++)
  {
    if((iNo % iCnt) != 0)
    {
      iSum=iSum+iCnt;
    }
  }
  return iSum;
}
int main()
{
  int iVlaue = 0;
  int iRet = 0;
  printf("Enter the number\n");
  scanf("%d",&iVlaue);
  iRet=SumNonFact(iVlaue);
  printf("%d",iRet);
  return 0;
}