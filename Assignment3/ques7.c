//WAP to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary.
#include<stdio.h>
int main()
{
    double a,b,c,D;
    printf("Enter the coefficient of a,b and c\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    D=(b*b)-(4*a*c);
    if(D>0)
    {
        printf("Root are real and distinct");
    }
    else if(D==0)
    {
        printf("Roots are real and equal");
    }
    else
    {
    printf("Roots are imaginary\n");
    }

    return 0;
}
