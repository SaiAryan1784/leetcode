#include<stdio.h>

int main()
{
    int nums[] = {-49,8,19,-39,37,22,-39,4,37,8,20,-2,-4,-5,14,-14,-27,24,30,3,-12,19,22,28,-3,-6,6,22,37,27,16,27,-6,-49,31,29};
    int numsSize=39;

    int freq[1001]={0};
    int max=0;
    int ans=0;

    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<0)
        {
            freq[(nums[i]*-1)]+=4;
        }
        else
        {
            freq[nums[i]]--;
        }
    }

    for(int i=0;i<1001;i++)
    {
        if(freq[i]==3)
        {
            if(i>max)
            {
                max=i;
            }
        }
    }
    printf("max:%d \n",max);
    printf("freq:%d\n",freq[34]);
    ans=max;

    if(ans==0)
    {
        ans=-1;
    }

    printf("%d",ans);

}