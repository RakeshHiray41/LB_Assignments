#include<stdio.h>
void Number(int iNo)
{
  if(iNo<50)
  {
    printf("small");
  }
  else if((iNo>=50) && (iNo<=100))
  {
    printf("medium");
  }
  else
  {
    printf("large");
  }
}
int main()
{
  int iVlaue=0;
  printf("Enter the number:");
  scanf("%d",&iVlaue);
  Number(iVlaue);
  return 0;
}