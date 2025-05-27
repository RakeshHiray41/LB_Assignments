#include<stdio.h>

double RectArea(float fWidth, float fHeight) 
{
  float fArea = 0.0f;
  
  if (fWidth < 0 || fHeight < 0) 
  {
    printf("Error: Width and height cannot be negative.\n");
    return -1; 
  }
  
  fArea = fWidth * fHeight;
  
  return fArea;
}

int main()
{
  float fValue1 = 0.0f , fValue2 = 0.0f;
  double fRet = 0.0;
  printf("Enter width : ");
  scanf("%f", &fValue1);

  printf("Enter Height : ");
  scanf("%f", &fValue2);
  
  fRet = RectArea(fValue1 , fValue2);
  
 printf("The  area of the Rectangle is %.3lf\n", fRet);
  
  return 0;
}