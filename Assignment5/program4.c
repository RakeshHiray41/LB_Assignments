#include<stdio.h>
void OddDisplay(int iNo)
{
  
  int iCnt = 0;
  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if((iCnt % 2) == 1)
    {
      printf("%d\t",iCnt);
    }
  }
}
int main()
{
  int iVlaue=0;
  printf("Enter the number:");
  scanf("%d",&iVlaue);
  OddDisplay(iVlaue);
  return 0;
  return 0;
}