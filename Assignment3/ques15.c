//WAP to check whether a given number is positive,negative or zero.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Number is positive.");
    }
    else if(n==0)
    {
        printf("Number is zero.");
    }
    else{
        printf("Number is negative.");
    }
    return 0;
}