#include<stdio.h>
void Display(int iNo)
{
  if(iNo<0)
  {
    iNo=-iNo;
  }
  switch(iNo)
  {
    case 1 :
    printf("one");
    break;
    case 2 :
    printf("two");
    break;
    case 3 :
    printf("three");
    break;
    case 4 :
    printf("four");
    break;
    case 5 :
    printf("five");
    break;
    case 6 :
    printf("six");
    break;
    case 7 :
    printf("seven");
    break;
    case 8 :
    printf("eight");
    break;
    case 9 :
    printf("nine");
    break;
    default:
    printf("invalid Number");
    break; 
  }
}

int main()
{
  int iVlaue=0;
  printf("Enter the number:");
  scanf("%d",&iVlaue);
  Display(iVlaue);
  return 0;
}