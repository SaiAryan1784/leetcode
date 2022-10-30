#include<stdio.h>

int main()
{
    int ans=0;
    int o;

    int n = 11;
    while(n)
    {
        o = n & 1;
        n >>= 1;
        ans <<= 1;
        ans |= o;
    }

    printf("%d",ans);
}