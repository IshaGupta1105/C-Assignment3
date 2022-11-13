//WAP which takes the month number as a input and display number of days in that month.
#include<stdio.h>

int main()
{
    int month_num;
    printf("Enter Month number:\n");
    scanf("%d",&month_num);
    if((month_num==1)||(month_num==3)||(month_num==5)||(month_num==7)||(month_num==8)||(month_num==10)||(month_num==12))
    {
        printf("Month has 31 days.\n");
    }
    else if(month_num==2)
    {
        printf("Month has 28/29 days.\n");
    }
    else{
        printf("Month has 30 days.\n");
    }
    return 0;
}