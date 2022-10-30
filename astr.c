#include<stdio.h>

int main()
{
    char s[]="hello world 5 x 5";

    int ans=1; 
    int j=0;
    int t=0;
    
    for(int i=0;s[i]!='\0';i++)
    {
       if(s[i]>='0' && s[i]<='9')
        {
            if(j==0)
            {
                j+=(s[i]-'0');
            }
            else
            {
                j=(j*10)+(s[i]-'0');
            }
        }
        else if(s[i]==' ' && s[i-1]>='0' && s[i-1]<='9')
        {
            if(j>t)
            {
                t=j;
                j=0;
            }
            else if(j==t || j<t)
            {
                ans=0;
                break;
            }
        }
    }
    if(j<t || j==t)
    ans=0;
    
    printf("%d",ans);
    return ans;
}