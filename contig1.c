#include<stdio.h>

int main()
{
    char s[]=

    int ans=0;
    int maxO=0;
    int maxI=0;
    int countI=0;
    int countO=0;
    
    for(int i=0;i!='\0';i++)
    {
        if(s[i]=='1')
        {
            countO=0;
            countI++;
        }
        else
        {
            countI=0;
            countO++;
        }
        if(maxO<countO)
                maxO=countO;
        if(maxI<countI)
                maxI=countI;
    }
    
    if(maxI>maxO)
    {
        ans=1;
    }
    else
    {
        ans=0;
    }
    
    return ans;

}