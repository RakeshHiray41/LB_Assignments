#include<stdio.h>

 void Pattern(int iNo)
{
  int iCnt = 0;
  
 

  if(iNo <= 0)
  {
    printf("Invalid input\n");
    return;
    
  }

  for(iCnt = 2; iCnt <= iNo * 2; iCnt++)
  {
    if(iCnt % 2 == 0)
    {
      printf("%d \t", iCnt);
    }
  }
  
  printf("\n");
}
int main()
{

  int iValue = 0;

  printf("Enter number of elements :");
  scanf("%d", &iValue); 

  Pattern(iValue);
  return 0;
}