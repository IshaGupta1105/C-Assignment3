//WAP to check whether a given character is an alphabet(uppercase),lowercase,digit or a special character.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    if((ch>=65)&&(ch<=99))
    {
        printf("%c is uppercase.\n",ch);
    }
    else if((ch>=97)&&(ch<=122))
    {
        printf("%c is lowercase.\n",ch);
    }
    else if((ch>=48) && (ch<=57))
    {
        printf("%c is digit.\n",ch);
    }
    else{
        printf("%c is special character.\n",ch);
    }
    return 0;
}