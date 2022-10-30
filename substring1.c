#include<stdio.h>
#include<string.h>

    char s[]= "babad";

    char s1[100001];

    char ans[100001];


int substr(int x, int index);

int ispalind(char p[],int x);

int ispalind(char p[],int x)
{
   
    int an=1;
    for(int i=0,j=x-1 ; j>i ;i++,j--)
    {
        if(p[i]!=p[j])
        {
            an=0;
            break;
        }
    }
    printf("%d,%s\n",an,p);
    return an;
}

int substr(int x,int index)
{
    int j;
    for(j=0;j<x;j++)
    {
        s1[j]=s[j+index];
    }

    s1[j]=0;
    printf("%s\n",s1);

    int n=ispalind(s1,x);

    printf("%d\n",n);

    if(n==1)
    {
        strcpy(ans,s1);
    }
    
    return n;

}

void main()
{
    int strlen=0;
    for(int i=0;s[i]!='\0';i++)
    {
        strlen++;
    }
    for(int j=strlen;j>=2;j--)
    {
        for(int i=0; i<=strlen-j ; i++)
        {
            int n=substr(j,i);
            if(n==1)
            {
                printf("%s\n",ans);
                return;
            }
        }
    }
return;
}

