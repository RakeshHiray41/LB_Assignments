#include<stdio.h>

double  SquareMeter(int iNo) 
{
  if (iNo < 0) 
  {
    printf("Error: Area cannot be negative.\n");
    return -1; 
  }
  double dSquareMeter = 0.0;
  dSquareMeter = iNo * 0.09290304; 
  return dSquareMeter;

}

int main()
{
  int fValue = 0;
  double dRet = 0.0;
  
  printf("Enter area in square feet :" );
  scanf("%d", &fValue);
  
  dRet = SquareMeter(fValue) ;
printf("The area in square meters is %.6lf\n", dRet);
  return 0;
}