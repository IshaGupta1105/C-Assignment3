//WAP to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if((num%3==0)&&(num%2==0))
    {
       printf("%d is divisible by 3 and  also divisible by 2.\n",num);

    }
    else
    {
       printf("%d is neither divisible by 3 nor divisible by 2.\n",num);
    }
    return 0;
}