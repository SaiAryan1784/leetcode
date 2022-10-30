#include<stdio.h>

int main()
{
    int accounts[2][3] = {{1,2,3},{3,2,1}};
    int accountsSize = 3;
    int accountsColSize = 2;

    int w=0;
    int maxw=0;
    
    for(int i=0;i<accountsColSize;i++)
    {
        for(int j=0;j<accountsSize;j++)
        {
            w= w + accounts [i] [j];
            printf("%d\n",accounts[i][j]);
        }
        if(maxw<w)
            maxw=w;
        w=0;
    }
    printf("%d",maxw);
    return maxw;
}