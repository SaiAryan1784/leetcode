#include<stdio.h>
#include<string.h>

int main()
{
    char s[]="hello world";
    for(int i=0; i!='\0'; i++)
    {
        printf("%c \n", s[i]);
    }
    return 0;
}