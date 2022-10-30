#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int x=1211;
    int ans=1;

    unsigned int length=(int)floor(log10((float)x))+1;
    char * arr = (char *) malloc(length * sizeof(char)), * curr = arr; 

    do
    {
        *curr++ = x % 10;
        x /= 10;
    }
    while (x != 0);

    for(int i=0,j=length-1 ;i<j;i++,j--)
    {
        if(arr[i]!=arr[j])
        {
            ans=0;
        }
    }
    printf("%d",ans);
}