
///////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   character is vowel (a,e,i,o,u) or not
//  Author :       Rakesh Sudhakar Hiray
//  Date :          11/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' ||
       cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character: ");
    scanf(" %c", &cValue);

    bRet = ChkVowel(cValue);
    if(bRet == TRUE)
    {
        printf("It Is Vowel\n");
    }
    else
    {
        printf("It Is Not Vowel\n");
    }

    return 0;
}
