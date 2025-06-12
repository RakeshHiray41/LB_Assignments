#include<stdio.h>
#include<stdlib.h>


void Digits(int Arr[], int iLength)
{
  int iCnt = 0;

  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    if(Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
    {
      printf("%d\t", Arr[iCnt]);
    }
  }
}

int main()
{
  int iSize = 0 ,iCnt = 0 ;

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

   Digits(ptr, iSize);
  free(ptr);



  return 0;

}