#include<stdio.h>

int main()
{
    int nums[]={-65982,-69129,-65982,-69129,-65982,-69129,-65982,-69129,-69129,-65982,-65982,-69129,-65982,-69129,-69129,-69129,-65982,-65982,-69129,-69129,-69129,-69129,-65982,-65982,-69129,-65982,-65982,-65982,-69129,-65982,-65982,-65982};
    int numsSize=32;

    int min=100001;
    int minc=1;
    int max=-100001;
    int maxc=1;
    
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>max)
        {
            max=nums[i];
            maxc=1;
        }
        else if(nums[i]==max)
            maxc++;
        if(nums[i]<min)
        {
            min=nums[i];
            minc=1;
        }
        else if(nums[i]==min)
            minc++;
    }
    printf("%d",)
    return numsSize-(minc+maxc);
}