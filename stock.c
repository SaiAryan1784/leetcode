#include<stdio.h>

int main()
{
    int prices[]={2,1,2,0,1};
    int pricesSize=5;
    int freq[10001]={0};
    int maxp=0;
    int maxd=0;
    
    for(int i=0;i<pricesSize;i++)
    {
        if(prices[i]<maxp && freq[prices[i]]!=0)
            continue;
        else
            freq[prices[i]]=i+1;
        if(prices[i]>maxp)
            maxp=prices[i];
    }
    
    for(int i=0,j=maxp;i<=j;i++)
    {
        if(freq[i]<freq[j] && freq[i]!=0)
        {
            if(maxd<j-i)
                maxd=j-i;
            i=0;
            j--;
        }
        else if(i==j)
        {
            i=0;
            j--;
        }
    }
    
    return maxd;
}