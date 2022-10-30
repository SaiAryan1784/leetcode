#include<stdio.h>

int main()
{
    char word[]= "bac";
    int arr[26]={0};
    int count=0;
    int max=0;
    int ans=1;
    
    for(int i=0;word[i]!='\0'; i++)
    {
        arr[word[i]-'a']++;
    }
    
    for(int i=0;i<26;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    
    for(int i=0;i<26;i++)
    {
        if(max-arr[i]==1)
            continue;
        else if(max-arr[i]==0 && count==0)
            count++;
        else if(max-arr[i]!=1 && arr[i]!=0)
        {
            ans=0;
            break;
        }
    }
    
    return ans;
}