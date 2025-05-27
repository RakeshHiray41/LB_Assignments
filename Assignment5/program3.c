#include<stdio.h>
void Display(int iNo)
{
 
  int iCnt = 0;
  for(iCnt = -iNo; iCnt <= iNo; iCnt++)
  {
    
    printf("%d\t",iCnt);
  }
}
 int main()
 {
  int iVlaue=0;
  printf("Enter the number:");
  scanf("%d",&iVlaue);
  Display(iVlaue);
  return 0;
 }