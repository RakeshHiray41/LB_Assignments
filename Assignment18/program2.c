#include<stdio.h>
#include<stdlib.h>

void Difference(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0)
        {
           printf ("%d \t" , Arr[iCnt]);
        }

    }
}

int main()
{
   int iSize = 0,iCnt = 0;
   int *p = NULL;
   printf("Enter the number of elements: ");
   scanf("%d", &iSize);

   p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unble to  allocation memory\n");
        return -1;
    }
    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
       Difference(p, iSize);
      free(p);

    return 0;
} 