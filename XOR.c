#include<stdio.h>
#include<stdlib.h>

int main()
{
    int pref[]={5,2,0,3,1};
    int prefSize=5;
    
    int returnSize=prefSize;
    int *ans=malloc(returnSize * sizeof(int));

    int count=0;

    for(int i=0;i<prefSize;i++)
    {
        ians[i]=pref[i]^pref[i-count];

        if(count==0)
        {
            count++;
        }
    }
    printf("%d",ans[2]);
}