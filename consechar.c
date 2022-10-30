#include<stdio.h>

int main()
{
    char s[]="abbcccddddeeeeedcba";

    int count=1;
    int ans=1;
    int i;

    for(i=1; s[i]!='\0'; i++)
    {
        if(s[i-1] == s[i])
        {
            count++;
        }
        else 
        {
            count=1;
        }
        if(count>ans)
        {
            ans=count;
        }
    }
    printf("%d",ans);
    return 0;
}