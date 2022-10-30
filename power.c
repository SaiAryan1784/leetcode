#include<stdio.h>

int main()
{
    int n=1073741824;

    int ans=0;

    while(n%2==0)
    {
        n=n/2;
        if(n==2)
        {
            ans=1;
        }
    }

    printf("%d",ans);

}