#include<stdio.h>
void MultipleDisplay(int iNo)
{
  
  int iCnt = 0;
  int iMul = 1;
  for(iCnt = 1; iCnt <= 5; iCnt++)
  {
     iMul= iNo * iCnt ;
      printf("%d\t",iMul);
  }
}
int main()
{
  int iVlaue=0;
  printf("Enter the number:");
  scanf("%d",&iVlaue);
  MultipleDisplay(iVlaue);
  return 0;

}