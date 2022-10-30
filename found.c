#include<stdio.h>

int main()
{
    int nums[] = {5,3,6,1,12};
    int numsSize = 5;
    int original = 3;

    for(int i=0,j=0; j<numsSize; i++)
    {
        if(original==nums[j])
        {
            original=original*2;
            j=0;
            i=0;
        }
        else
        j++;
    }
    printf("%d",original);
}