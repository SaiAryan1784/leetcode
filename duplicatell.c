#include<stdio.h>

int main()
{
    int nums[]={1,2,3,1};
    int numsSize=4;
    int k=3;

    long long freq[200000002][100]={0};
    int ans=0;
    
    for(int i=0;i<numsSize;i++)
    {
        if(freq[nums[i]][0]==0)
            freq[nums[i]][0]=i;
        else 
            if((i-(freq[nums[i]][0]))<=k)
            {
                ans=1;
                break;
            }
    }
    
    return ans;
}