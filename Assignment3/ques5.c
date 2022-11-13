//WAP to check whether a given number is a three digit number or not.
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if((n>99)&&(n<1000))
    printf("%d is three digit number.",n);
    else
    printf("%d is not three digit number.",n);
    return 0;
}