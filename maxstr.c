#include<stdio.h>

int main()
{
    char s[]="abcde";
    int i=0;
    int maxcount=1;
    int count=0;
    char exp=s[i];

    for(i=0; s[i]!='\0'; i++)
    {
        if(exp==s[i])
        {
            count++;
        }
        else 
        {
            if(maxcount<count)
            {
            maxcount=count;
            }
            count=1;
        }
        exp=s[i]+1;
        printf("%d, %c, %c, %d, %d \n", i, s[i], exp, count, maxcount);
    }
    if(maxcount<count)
    {
        maxcount=count;
    }
    printf("%d", maxcount);
}