#include<stdio.h>
int main()
{
    int nums[] = {1,1,1,0};
    int k = 3;
    int numsSize = 4;
    int count=0;
    int ans=1;
    int i;

    for(i=0; i<numsSize; i++)
    {
        if(i==numsSize-k)
        {
            count<k;
            ans=1;
            break;
        }
        if(nums[i]!=1)
        {
            count++;
        }
        else if(count>=k && nums[i]==1)
        {
            count=0;
        }
        else if(count<k && nums[i]==1 && i!=0 && i>k)
        {
            printf("%d,%d,%d \n",nums[i],count,i);
            ans=0;
            break;
        }
    }
    if(count<k)
    {
        printf("%d,%d,%d \n",nums[i],count,i);
        ans=0;
        printf("%d",ans);
    }
    printf("%d", ans);
}