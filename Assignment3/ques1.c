// WAP to check whether a given number is positive or negative.
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
    else{
        printf("Number is negative.");
    }
    return 0;
}