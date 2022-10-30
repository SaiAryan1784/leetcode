#include<stdio.h>

int main()
{
    int nums[]={5,6,2,7,4};
    int numsSize=5;
    // int i,j,t;
    // for(i=0; i<numsSize; i++)
    // for (i=0; i<numsSize-1; i++) {
    //     for (j=i+1; j<numsSize; j++) {
    //         if (nums[i] > nums[j]) {
    //             t = nums[i];
    //             nums[i] = nums[j];
    //             nums[j] = t;
    //         }
    //     }
    // }
    // int d=(nums[numsSize-1]*nums[numsSize-2])-(nums[0]*nums[1]);
    // printf("%d",d);

    int max1,max2,min1,min2;
    max1 = max2 = 0;
    min1 = min2 = 10001;

    for(int i=0; i<numsSize; i++)
    {
        if(nums[i]>max1)
        {
            max2=max1;
            max1=nums[i];
        }
        else if(nums[i]>max2)
        {
            max2=nums[i];
        }

        if(nums[i]<min1)
        {
            min2=min1;
            min1=nums[i];
        }
        else if(nums[i]<min2)
        {
            min2=nums[i];
        }
    }

    printf("%d", ((max1*max2)-(min1*min2)));
    return 0;
}