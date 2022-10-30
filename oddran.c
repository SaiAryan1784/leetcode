#include<stdio.h>
int main()
{
    int low=1;
    int high=9;
    int count=0;

    for(int i=low; i<=high; i++)
    {
        if(i%2!=0)
        {
            printf("%d \n",i);
            count++;
        }
    }
    printf("%d",count);
}