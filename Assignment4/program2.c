

#include <stdio.h>
void FactRev(int iNo)
{
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  int iCnt=0;
  for(iCnt = (iNo/2);iCnt >=1 ; iCnt--)
  {
    if((iNo % iCnt) == 0)
    {
      printf("%d",iCnt);
    }
  }
}
int main()
{
  int iVlaue = 0;
  printf("Enter the number\n");
  scanf("%d",&iVlaue);
  FactRev(iVlaue);
  return 0;
}