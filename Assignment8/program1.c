#include<stdio.h>

double CircleArea(double fRadius) 
{
  float const PI = 3.14f;
  float fArea = 0.0f;
  if (fRadius < 0) 
  {
    printf("Error: Radius cannot be negative.\n");
    return -1; 
  }
   fArea = PI * fRadius * fRadius;

   return fArea;
}

int main()
{
  float fRadius = 0.0f;
  double fRet = 0.0;
  printf("Enter the radius of the circle: ");
  scanf("%f", &fRadius);
  
  fRet = CircleArea(fRadius);
  
 printf("The area of the circle is %.4lf\n", fRet);
  
  return 0;
}