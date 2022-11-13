//WAP to take marks of 5 subjects from the user.Assume marks are given out of 100 and passing marks is 33.Now display whether the candidate passed the examination or failed.
#include<stdio.h>
int main()
{
    float S1,S2,S3,S4,S5,percentage;
    printf("Enter the marks:\n");
    scanf("%f%f%f%f%f",&S1,&S2,&S3,&S4,&S5);
    printf("Total_marks = %.2f\n",S1+S2+S3+S4+S5);
    percentage=((S1+S2+S3+S4+S5)/500)*100;
    printf("Percentage = %.2f%%\n",percentage);
    if(percentage>=33)
    {
        printf("Candidate is passed.\n");
    }
    else
    {
        printf("Candidate is failed.\n");
    }
    return 0;
}