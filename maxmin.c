#include<stdio.h>

int main()
{
    int nums[] = {-1,10,6,7,-7,1};
    int numsSize=6;

    int max=0;
    int min=0;
    int pos=0;
    int neg=0;
    int ans=0;
    
    for(int i=0;i<numsSize;i++)
    {
        // if(max<nums[i])
        // {
        //     max=nums[i];
        //     neg=nums[i]-(2*nums[i]);
        // }
        // else if(min>nums[i])
        // {
        //     min=nums[i];
        //     pos=nums[i]*-1;
        // }
        // if(nums[i]==neg || nums[i]==pos)
        // {
        //     if(nums[i]==neg)
        //         ans=max;
        //     else
        //         ans=pos;
        // }

        if(min>nums[i])
        {
            min=nums[i];
        }
    }
    printf("%d",ans);

    return 0;
}