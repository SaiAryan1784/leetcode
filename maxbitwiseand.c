#include<stdio.h>

int main()
{
    int nums[] = {311155,311155,311155,311155,311155,311155,311155,311155,201191,311155};
    int numsSize=10;

    int j=0;

    int count=1;
    int fcount=1;
    
    for(int i=0; i<numsSize; i++)
    {
        if(nums[j]<=nums[i])
        {
            if(j==i)
            {
                continue;
            }
            else if(nums[i]==nums[j])
            {
                count++;
            }
            else if(nums[j]<nums[i])
            {
                j=i;
                count=1;
            }
        }
        if(nums[j]!=nums[i])
        {
            fcount=count;
        }
    }
    printf("%d", fcount);
}