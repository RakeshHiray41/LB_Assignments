#include<stdio.h>

 void Pattern(int iNo)
{
  int iCnt = 0;
 

  if(iNo <= 0)
  {
    printf("Invalid input\n");
    return;
    
  }

  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
   
    printf("%d \t", iCnt);
    printf("*\t");
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