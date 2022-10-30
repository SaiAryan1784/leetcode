#include<stdio.h>

int hammingDistance(int x,int y);

int hammingDistance(int x, int y){
    
    int count=0;
    
    long n=x^y;
    
    while(n)
    {
        n &= (n-1);
        count++;
    }
    
    return count;

}

int main()
{
    int nums[]={4,14,2};
    int numsSize=3;
    int sum=0;
    
    for(int i=0; i<numsSize; i++)
    {
        for(int j=i+1; j<numsSize;j++)
        {
            sum=sum+hammingDistance(i,j);
            printf("%d,%d \n",sum,hammingDistance);
        }
    }
    
    return sum;
}