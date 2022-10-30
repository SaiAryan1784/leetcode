#include<stdio.h>

int main()
{
    int returnValues[2];
    // int n;
    // int j;
    int *returnValues = malloc((*returnSize)*sizeof(int)); // malloc??
    int numSize=4;
    int nums[] = {3,5,2,4};
    int i;
    int target = 6;
    int k; 
    for(i = 0; i<numSize; i++)
    {
        for(k = i+1; k<numSize; k++)
        {
            int sum = nums[i]+nums[k];
            // printf("%d,%d,%d \n", sum, nums[i], nums[k]);
            if(sum == target)
            {
                // n=i;
                // j=k;
                returnValues[0]=i;
                returnValues[1]=k; 
                *returnSize = 2; 
                return returnValues;
            }
        }
    }
    return returnValues;
}