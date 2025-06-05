#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow + 1; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            if(i == 1 || i == iRow + 1)
                printf("%d ", j);
            else if(j == 1 || j == i || j == 5)
                printf("%d ", j);
            else
                printf("  ");
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
