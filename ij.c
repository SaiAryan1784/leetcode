#include<stdio.h>

int main()
{
    int n;
    int arrSize=4;
    int arr[7]={-2,0,10,-19,4,6,-8};
    for(int i=0; i<arrSize; i++)
    {
        for(int k=1; k<arrSize; k++)
        {
            if(i==k)
            {
                continue;
            }
            else if(arr[i]*2==arr[k])
            {
                n=1;
            }
        }
        for(int t=1; t<arrSize; t++)
        {
            if(i==t)
            {
                continue;
            }
            else if(arr[i]%2!=0)
            {
                continue;
            }
            else if(arr[i]/2==arr[t])
            {
                n=1;
            }
        }
    }
    if(n==1)
    {
        printf("%d", n);
    }
    else
    {
        n=0;
        printf("%d", n);
    }
}
