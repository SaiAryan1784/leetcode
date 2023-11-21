#include<stdio.h>
int main()
{
    int nums[]={2,3,1,3,2};
    int numsSize=5;
    int n;
    int a;
    for(int i=0; i<numsSize; i++)
    {
        for(int k=0,n=0; k<numsSize; k++,n++)
        {
            if(i==k)
            {
                continue;
            }
            else if(nums[i]==nums[k])
            {
                break;
            }
            else if(n==numsSize-1)
            {
                a=nums[i+1];
            }
        }
    }
    printf("%d", a);
}