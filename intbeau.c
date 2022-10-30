#include<stdio.h>

int add=0;
long long no=0;
long long t=0;

int check_sum(long long no);

int main()
{
    long long n=467;
    int target=6;
    no=n;
    int s=0;
    int count=0;

    s=check_sum(no);
    while(s>target)
    {
        s=check_sum(no);
    }

    printf("count-%d",count);
    return count;
}

int check_sum(long long no)
{
    

    return sum;
}


