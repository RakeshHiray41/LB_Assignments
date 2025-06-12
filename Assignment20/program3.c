#include<stdio.h>
#include<stdlib.h>


int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iTemp = -1;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]  == iNo)
        {
          iTemp = iCnt;
        }
      }
      return iTemp;
}

int main()
{
   int iSize = 0, iRet = 0 ,iCnt = 0 , iValue = 0;
   int *p = NULL;
   printf("Enter the number of elements: ");
   scanf("%d", &iSize);

   p = (int *)malloc(iSize * sizeof(int));

   printf("Enter the number to check its frequency: ");
   scanf("%d", &iValue);

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
       iRet = LastOcc(p, iSize, iValue);

       if(iRet == -1)
       {
           printf("there is no such number  \n");
       }
       else
       {
           printf("First occurrence Number is : %d \n",iRet);
       }
      free(p);

    return 0;
}