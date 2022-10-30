#include<stdio.h>

int main()
{
    int n=5;

    int counts=0;

    for(int i=1;i<=n;i++)
    {
        if(n>=i)
        {
            n=n-i;
            counts++;
        }
        else
        {
            break;
        }
    }
    
    
}
