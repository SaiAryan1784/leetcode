#include<stdio.h>
#include<math.h>

int reverse(int n)
{
    int a=0;
    int ans=0;
    while(n)
    {
        a=n%10;
        n=n/10;
        
        ans=ans*10+a;
    }

    return ans;
}

int main()
{
    int nums[]={89904,846787,965070,396570,847607,625317,851503,143414,954838,837423,988190,916423,771555,680073,575614,967207,965688};

    int numsSize=17;

    int freq[2000001]={0};
    
    int ans[2000001]={0};
    
    int count=0;
    
    for(int i=0;i<numsSize*2;i++)
    {
        if(i<numsSize)
            ans[i]=nums[i];
        else if(i>=numsSize)
            ans[i]=reverse(nums[i-numsSize]);

        printf("%d\n",ans[i]);
        
        freq[ans[i]]|=1;
    }
    
    for(int i=0;i<200001;i++)
    {
        if(freq[i]==1)
            {
                count++;
            }
    }
    
    printf("%d",count);

}