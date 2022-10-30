#include<stdio.h>

int main()
{
    char s[] = "abaccb";
    int distance[] = {1,3,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int ans=1;
    int i;

    for(i=0; s[i]!='\0'; i++)
    {
        
        // if(distance[i]==0)
        // {
        //     continue;
        // }
        // else if(==s[i])
        // {
        //     printf("%c,%d,%d \n", s[i],i,distance[i]);
        //     continue;
        // }
        // else
        // {
        //     ans=0;
        //     printf("%d \n",ans);
        //     break;
        // }
    }
    printf("%d ",ans);
}