#include<stdio.h>
void Pattern(int iNo)
{
  int iCnt = 0;
  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("$\t*\t");
  }
}
 int main()
 {
  int iVlaue=0;
  printf("Enter the number:");
  scanf("%d",&iVlaue);
  Pattern(iVlaue);
  return 0;
 }