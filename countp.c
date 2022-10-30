#include<stdio.h>

int reverse(int a, int b)
{
    int k=0;
    int t=0;
    int ans=0;
    int t2=0;
    int ans2=0;
    
    int n=a;
    int n2=b;
    
    while(a)
    {
        t=a%10;
        a=a/10;
        
        ans=ans*10+t;
    }
    ans+=n2;
    printf("ans%d",ans);
    
    while(b)
    {
        t2=b%10;
        b=b/10;
        
        ans2=(ans2*10)+t2;
    }
    ans2+=n;
    printf("ans2%d\n",ans2);
    
    if(ans==ans2)
        {
            k=1;
            printf("f%d,%d\n",ans,ans2);
        }

    return k;
}

int main()
{
    int nums[]={42,11,1,97};
    int numsSize=4;
    int n=0;
    int count=0;
    
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            n=reverse(nums[i],nums[j]);   
            if(n==1)
                count++;
        }
    }
    printf("%d",count);
    return count;
}