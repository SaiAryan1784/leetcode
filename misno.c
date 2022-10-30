#include<stdio.h>
int main()
{
    int nums[]={3,0,1};
    int numsSize=3;
    int k;
    int i;
    for(i=0; i<=numsSize; i++)
    {
        for(k=0; k<numsSize; k++)
        {
            if(nums[k]==i)
            break;
        }
        printf("%d,%d \n", k, i);
    }
    return 0;
}