//program to find the largest digit of a given number

#include<stdio.h>

int main()
{
    int n, num, max = 0, rem = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    num = n;

    while(n != 0)
    {
        rem = n % 10;

        if(max < rem)
        {
            max = rem;
        }

        n /= 10;
    }

    printf("Largest digit og given number (%d) is : %d",num,max);
    return 0;
}