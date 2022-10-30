#include<stdio.h>
int main()
{
    int nums[]={1, 0, 1, 0, 0, 1};
    int numsSize=6;
    int k=2;
    int count=0;
    int ans=1;
    int countit= 0;


    for(int i=0; i<numsSize; i++)
    {
        if (nums[i] == 1 )
        {
            // Found first 1
              if (countit == 0)
                   {
                   countit=1;
                   continue;
                   }
            if(count<k && countit==1)
            {
                printf("%d",i);
                printf("false\n");
                ans =0;
                break;
            }
            count=0;
            continue;
        }
        if(nums[i]!= 1 && countit)
        {
            count++;
            continue;
        }
    }
    
    return ans; 
}
