#include<stdio.h>

int main()
{
    int nums[]={1,2,2,1};
    int numsSize=4;
    int k=1;
    
    int count=0;
    int freq[101]={0};
    
    for(int i=0;i<numsSize;i++)
    {
        freq[nums[i]]++;
    }
    
    for(int i=0,j=i+k;j<101;i++)
    {
        j=i+k;
        count=count+(freq[i]*freq[j]);
    }

    printf("%d",count);
}