#include<stdio.h>

void Pattern(int iRow, int iCol)
{
  if(iRow != iCol)
  {
    printf("Number of rows and columns must be equal.\n");
    return;
  }
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if(j <= i)
                printf("* ");
            else
                printf("# ");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
