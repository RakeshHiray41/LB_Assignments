#include<stdio.h>
#include<stdlib.h>


void DigitSum(int Arr[], int iLength)
{
  int iCnt = 0 , iSum =0;

  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    iSum = 0;
    while(Arr[iCnt] != 0)
    {
      int iDigit = Arr[iCnt] % 10;
      Arr[iCnt] /= 10;
      iSum += iDigit;
    }

    printf("%d\t", iSum);
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

   DigitSum(ptr, iSize);
  free(ptr);



  return 0;

}