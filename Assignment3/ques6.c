//WAP to print greater between two numbers. Print one number if both are same.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("%d is greater.\n",a);
    else if(a==b)
    printf("Both are equal.");
    else
    printf("%d is greater.\n",b);
    return 0;
}