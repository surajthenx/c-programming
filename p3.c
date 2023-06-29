//program to check if given string is a palindrome

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int len,i,flag = 0;

    printf("Enter a String -> ");
    scanf("%s",str);

    len = strlen(str);

    int j = len - 1;

    for(i = 0; i < len; i++)
    {
        if(str[i] != str[j])
        {
            flag = 1;
        }
        if(j != 0)
        {
            j--;
        }
    }

    if(flag == 0)
    {
        printf("Given string is palindrome!!");
    }
    else
    {
        printf("Given string is not a palindrome!!");
    }
    return 0;
}