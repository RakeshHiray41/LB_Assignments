#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Chack(int Arr[], int iLength)
{
    int iCnt = 0, iEvenCount = 0, iOddCount = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]  == 11)
        {
            bFlag = TRUE;
            break;
        }
    }
    return bFlag;
}

int main()
{
   int iSize = 0, iRet = 0 ,iCnt = 0;
   int *p = NULL;
   BOOL bRet = FALSE;
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
       iRet =Chack(p, iSize);

       if(iRet == TRUE)
       {
           printf("11 is present \n");
       }
       else
       {
           printf("11 is not present \n");
       }
      
      free(p);

    return 0;
}