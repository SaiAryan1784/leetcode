#include<stdio.h>

int main()
{
    int nums[]={1,3,4,3,5,3};
    int numsSize=6;

    int count;
    int i;
    int k=nums[0];

    for(i=1; i<numsSize; i++ )
    {
        if(nums[i]==nums[i-1])
        {
            k=nums[i];
            break;
        }
    }
    if(nums[0]==nums[2])
    {
        k=nums[0];
    }
    if(nums[1]==nums[3])
    {
        k=nums[1];
    }
    printf("%d", k);
    return 0;

}