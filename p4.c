// program to swap 2 numbers without using third variable

#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter any two numbers -> ");
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping\n");
    printf("a = %d\tb = %d",a,b);

    //swpping
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nNumbers after swapping\n");
    printf("a = %d\tb = %d",a,b);

    return 0;
}