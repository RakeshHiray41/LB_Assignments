///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :    convert case of that character
//  Author :       Rakesh Sudhakar Hiray
//  Date :          11/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
void DisplayConvert(char CValue)
{
  if((CValue >='A')&&(CValue<='Z'))
  {
    CValue= CValue + 32;
    printf("%c",CValue);
  }
   else if((CValue >='a')&&(CValue<='a'))
  {
    CValue= CValue- 32;
    printf("%c",CValue);
  }
  else
  {
    printf("Invalid input\n");
  }
}
int main()
{
  char cValue='\0';
  printf("Enter Character: ");
  scanf("%c",&cValue);
  DisplayConvert(cValue);
  return 0;
}