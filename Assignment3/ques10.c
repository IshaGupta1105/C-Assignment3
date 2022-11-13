//WAP to which takes the cost price and selling price of a product from the user.Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    float CP,SP;
    printf("Enter the cost price and selling price of a product\n");
    scanf("%f%f",&CP,&SP);
    if(CP>SP)
    {
        printf("Loss = %.2f%%\n",((CP-SP)/CP)*100);
    }
    else
    {
        printf("Profit = %.2f%%\n",((SP-CP)/CP)*100);
    }
    return 0;
}