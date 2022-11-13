//WAP which takes the length of the sides of a triangle as a input.Display whether the triangle is valid or not.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of triangle:\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a))
      printf("It is valid triangle.\n");
    else
      printf("It is invalid triangle.\n");  
    return 0;
}