#include<stdio.h>

int main()
{
    char s[]="21474836460";
    int count=0;
    int np=1;
    long long ans=0;
    
    for(int i=0;s[i]!='\0';i++)
    {
        if('0'>s[i] || s[i]>'9')
        {
            if(count==0 && s[i]!='-' && s[i]!='+' && s[i]!=' ')
                break;
            if(s[i]=='.')
                break;
            if(s[i]=='-' && '0'<=s[i+1]<='9')
                np=-1;
            if(s[i]=='+' && '0'<=s[i+1]<='9')
                np=1;
            if((s[i]=='+' || s[i]=='-') && ('0'>s[i+1] || s[i+1]>'9'))
                break;
        }
        else if('0'<=s[i]<='9')
        {  
            count++;
            ans=(ans*10)+s[i]-'0';
            continue;
        }
    }
    if(ans>2147483648)
        ans=2147483648;
    printf("%d",ans*np);
}