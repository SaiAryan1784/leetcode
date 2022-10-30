#include<stdio.h>

int main()
{
    int nums[]={1,2,3,4,5,8,9,1,2,3,4,5,6,7};
    int numsSize=14;

    int prod=nums[0]*nums[1]*nums[2];

    for(int i=0,j=1,k=2; k<numsSize; i++,j++,k++)
    {
        int product=nums[i]*nums[j]*nums[k];
        if(prod<product)
        {
            prod=product;
        }
    }
    printf("%d", prod);


}