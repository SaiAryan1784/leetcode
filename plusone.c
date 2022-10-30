#include<stdio.h>

int main()
{
    int digits[]={1,2,3};
    int digitsSize=3;
    int returnSize;
    int no=0;
    
    for(int i=0;i<digitsSize;i++)
    {
        no=(no*10)+digits[i];
    }
    
    no++;
    int n=no;
    int count=0;
    
    while(n%10!=0)
    {
        n/=10;
        count++;
    }
    
    returnSize=count;
    int *ans=malloc(returnSize * sizeof(int));
    
    count--;
    
    for(int i=0;count-i>=0;i++)
    {
        ans[count-i]=no/10;
        no/=10;
    }
    
    return ans;
}