#include<stdio.h>

int main()
{
    int nums[]={6,7,9};
    int numsSize=3;
    
    int min=1001;
    int max=0;
    int gcd=0;
    
    for(int i=0;i<numsSize;i++)
    {
        if(max<nums[i])
            max=nums[i];
        if(min>nums[i])
            min=nums[i];
    }

    if(min==max)
        return min;
    
    for(int i=1;i<=min;i++)
    {
        if(min%i==0 && max%i==0)
            gcd=i;
        else
            break;
    }
    
    return gcd;
}