#include<stdio.h>

int main()
{
    char a[]="11";
    char b[]="1";


    char an[10001]={0};
    char bn[10001]={0};
    char ans[1000001]={0};
    
    int ptr=0;
    int ptr2=0;
    
    for(int i=0;a[i]!='\0';i++)
    {
        ptr++;
    }
    for(int i=0;b[i]!='\0';i++)
    {
        ptr2++;
    }
    ptr--;
    ptr2--;
    
    for(int i=0; ptr>=0; ptr--,i++)
    {
        an[i]=a[ptr];
    }
    for(int i=0; ptr2>=0; ptr2--,i++)
    {
        bn[i]=b[ptr2];
    }

    for(int i=0; i<=10000; i++)
    {
        if(ans[i]==2)
        {
            ans[i]=0;
            ans[i+1]=1;
        }
        if(an[i]==bn[i]==1)
        {
            ans[i]=0;
            ans[i+1]++;
        }
        else if(an[i]!=bn[i])
        {
            ans[i]++;
        }
    }

    for(int i=0; i<=5;i++)
    {
        printf("%c \n",ans[i]);
    }

    


}