#include<stdio.h>

int KMtoMeter(int iNo) 
{
  int iMeter = 0;
  if (iNo < 0) 
  {
    printf("Error: Kilometers cannot be negative.\n");
    return -1; 
  }
 iMeter = iNo * 1000;
  return iMeter;
}

int main()
{
  int  iValue = 0 , iRet = 0;
  printf ("Enter distance :");
  scanf("%d", &iValue);
  
  iRet = KMtoMeter(iValue);
  printf("The distance in meters is %d\n", iRet);
  return 0;
}