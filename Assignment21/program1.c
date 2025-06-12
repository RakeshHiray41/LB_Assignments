#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Maximum(int Arr[], int iLength)
{
  int iCnt = 0;
  int iMax = Arr[0];

  for(iCnt = 1; iCnt < iLength; iCnt++)
  {
    if(Arr[iCnt] > iMax)
    {
      iMax = Arr[iCnt];
    }
  }
  
  return iMax;
}

int main()
{
  int iSize = 0 ,iCnt = 0 , iRet = 0;

  int *ptr = NULL;

  printf("Enter the number of elements: ");
scanf("%d", &iSize);

  ptr = (int *)malloc(iSize * sizeof(int));
  if(ptr == NULL)
  {
    printf("unable to allocate memory \n");
    return -1;
  }
  printf("Enter the elements: \n");

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter element %d: ", iCnt + 1);
    scanf("%d", &ptr[iCnt]);
  }

  iRet = Maximum(ptr, iSize);

  printf("largest number is: %d\n", iRet);
  free(ptr);



  return 0;

}