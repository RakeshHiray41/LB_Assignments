
///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   check whether it is divisible by 5 or not.
//  Author :        Rakesh Sudhakar Hiray
//  Date :          11/05/2025
//
/////////////////////////////////////////////////////
 #include <stdio.h>
 typedef int BOOL;
  #define TRUE 1
  #define FALSE 0
  int Check(int iNo)
  {
      if((iNo % 5) == 0)
      {
          return TRUE;
      }
      else
      {
          return FALSE;
      }
  }
  int main()
  {
      int iValue = 0;
      BOOL bRet = FALSE;
      printf("Enter number\n");
      scanf("%d",&iValue);
      bRet = Check(iValue);
      if(bRet == TRUE)
      {
          printf( "divisible by 5\n");
      }
      else
      {
          printf("Not divisible by 5\n");
      }
      return 0;
  }