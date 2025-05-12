
///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   number even number on screen
//  Author :        Rakesh Sudhakar Hiray
//  Date :          11/05/2025
//
///////////////////////////////////////////////////////


#include <stdio.h>
void PrintEven(int iNo)
{
  if(iNo <= 0)
  {
    return;
  }
    int iCnt=0;
    for(iCnt=1;iCnt<=( iNo * 2) ;iCnt++)
    {
      if(iCnt % 2 == 0)
      {
        printf("%d\n",iCnt);
      }
    }
}
int main()
{

  int iValue=0;
  printf("Enter Number :");
  scanf("%d",&iValue);
  PrintEven(iValue);
  return 0;
}