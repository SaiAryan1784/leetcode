#include<stdio.h>

int main()
{
    char word[]="leet1234code234";
    int count=0;
    int n=0;
    int freq[100000]={0};
    int ans=0;
    
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[i]>='0' && word[i]<='9')
        {
            count++;
            if(count==1)
            {
                n=(word[i]-'0');
            }
            else if(count>1)
            {
                n=(n*10)+(word[i]-'0');
            }
        }
        else
        {
            if(count>=1)
            {
                freq[n]++;
                n=0;
                count=0;
            }
        }
    }
    
    for(int i=0;i<100000;i++)
    {
        if(freq[i]>=1)
            ans++;
    }
    
    return ans;
}