#include<stdio.h>
#include<string.h>

int main()
{
    char moves[]="UDDUURLRLLRRUDUDLLRLURLRLRLUUDLULRULRLDDDUDDDDLRRDDRDRLRLURRLLRUDURULULRDRDLURLUDRRLRLDDLUUULUDUUUUL";
    int x=0;
    int ans=1;
    
    for(int i=0;moves[i]!='\0';i++)
    {
        if(moves[i]=='U')
        {
            x++;
            printf("%d , %d \n",i,x);
        }
        if(moves[i]=='D')
        {
            x--;
            printf("%d , %d \n",i,x);
        }
        if(moves[i]=='R')
        {
            x++;
            printf("%d , %d \n",i,x);
        }
        if(moves[i]=='L')
        {
            x--;
            printf("%d , %d \n",i,x);
        }
    }
    
    if(x>0 || x<0)
    {
        ans=0;
    }
    else if(x==0)
    {
        ans=1;
    }
    
    printf("%d",ans);
    return 0;
}