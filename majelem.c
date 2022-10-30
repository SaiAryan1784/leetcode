#include<stdio.h>
int main()
{
    int nums[]={2,3,3,3,2,3};
    int numsSize=6;
    int i;
    int a=0;
    int cand=0;
    for(i=0; i<numsSize; i++)
    {
        if(nums[cand]==nums[i])
        {
            a++;
        }
        else
        {
            a--;
        }
        if(a==0)
        {
            cand=i+1;
        }
    }
    printf("%d", nums[cand]);
}