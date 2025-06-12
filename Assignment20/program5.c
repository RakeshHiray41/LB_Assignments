#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[], int iLength)
{
    int iCnt = 0, imul = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if(Arr[iCnt]%2 ==1)
       {
        imul *= Arr[iCnt];
       }
    }
    return imul;
}

int main()
{
   int iSize = 0, iRet = 0 ,iCnt = 0 ;
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
     iRet = Product (p, iSize);

     printf("Product is : %d \n", iRet);

     free(p);

    return 0;
}