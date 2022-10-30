#include<stdio.h>

int main()
{
    char s[]="zpfupfkmsuistzmtkijj";
    int freq[26]={0};
    int count=0;
    int maxi=0;
    int n=0;
    int ans=1;
    
    for(int i=0;s[i]!='\0';i++)
    {
        freq[s[i]-'a']++;
        if((s[i]-'a')>maxi)
            maxi=(s[i]-'a');
    }
    
    for(int i=0;i<maxi+1;i++)
    {
        if(freq[i]>0 && count==0)
        {
            count++;
            n=freq[i];
        }
        else if(freq[i]!=0 && freq[i]!=n)
        {
            ans=0;
            break;
        }
    }

    printf("%d",ans);
    
    return ans;

}