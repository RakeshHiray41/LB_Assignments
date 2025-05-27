#include<stdio.h>

double  FhtoCs(float fTemp) 
{
  float fCelsius = 0.0f;
  
  if (fTemp < -459.67f) 
  {
    printf("Error: Temperature cannot be below absolute zero.\n");
    return -1; 
  }
  
  fCelsius = (fTemp - 32) * 5.0f / 9.0f;
  
  return fCelsius;
}


int main()
{
  float fValue1 = 0.0f ;
  double fRet = 0.0;
  printf("Enter temperature in Fahrenheit :" );
  scanf("%f", &fValue1);
  
  fRet = FhtoCs(fValue1) ;

  
 printf("The temperature in Celsius is %.5lf\n", fRet);
  
  return 0;
}