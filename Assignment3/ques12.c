//wap to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character\n");
    scanf("%c",&c);
    if((c>=65)&&(c<=99))
    {
        printf("%c is uppercase.\n",c);
    }
    else if((c>=97)&&(c<=122))
    {
        printf("%c is lowercase.\n",c);
    }
    return 0;
}