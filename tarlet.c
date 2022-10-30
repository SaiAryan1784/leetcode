#include<stdio.h>

int main()
{
    
    char ans;
    int count=0;
    
    for(int i=0;letters[i]!='\0';i++)
    {
        if((letters[i]-'a')>(target-'a'))
        {
            ans=letters[i];
            count++;
            break;
        }
    }
    if(count==0)
        ans=letters[0];
    
    return ans;
}