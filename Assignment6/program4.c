#include<stdio.h>
void Table(int iNo)
{
  int iCnt=0;
  int iMult=0;
  if(iNo<0)
  {
    iNo=-iNo;
  }
  for(iCnt=1;iCnt<=10;iCnt++)
  {
    iMult=iNo*iCnt;
    printf("%d\t",iMult);
  }
}
int main()
{
  int iVlaue=0;
  printf("Enter the number:");
  scanf("%d",&iVlaue);
  Table(iVlaue);
  return 0;
}