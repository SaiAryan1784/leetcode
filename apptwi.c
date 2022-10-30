#include<stdio.h>

int main()
{
    char s[]="abccbaacz";
    
    int arr[200]={0};
    char ans;
    
    for(int i=0; s[i]!='\0'; i++)
    {
        arr[s[i]]++;
        printf("%d, %c \n",arr[s[i]], s[i]);
        if(arr[s[i]]==2)
        {
            printf("")
            ans=s[i];
        }
    }
    printf("ans=%c",ans);

}