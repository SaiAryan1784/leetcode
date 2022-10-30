#include<stdio.h>

int main()
{
    int* nums[]={-1,-2,-3,-4,3,2,1};
    int numsSize=7;

    int counto=0;
    int countn=0;
    
    int x=1;
   
    for(int i;i<numsSize;i++)
    {
       if(nums[i]<0)
       {
         countn++;
           if(countn%2!=0)
               x=-1;
           else
               x=1;
       }
        else if(nums[i]==0)
        {
            x=0;
            break;
        }
    }
    
    return x;
}