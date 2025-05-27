

#include <stdio.h>
void NonFact(int iNo)
{
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  int iCnt=0;
  for(iCnt = 1;iCnt <=iNo ; iCnt++)
  {
    if((iNo % iCnt) != 0)
    {
      printf("%d ",iCnt);
    }
  }
}
int main()
{
  int iVlaue = 0;
  printf("Enter the number\n");
  scanf("%d",&iVlaue);
  NonFact(iVlaue);
  return 0;
}