#include<stdio.h>

int main()
{
    char s[]="textbook";

    int count=0;
    int vow1=0;
    int vow2=0;
    int ans=0;
    
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    int j=count-1;
    int k=0;
    printf("%c \n",s[0]);
    printf("%c \n",s[j]);
    for(int k=0; k>j ; k++,j--)
    {
        printf("%c \n",s[k]);
        if(s[k]=='a' || s[k]=='e' || s[k]=='i' || s[k]=='o' || s[k]=='u' || s[k]=='A' || s[k]=='E' || s[k]=='I' || s[k]=='O' || s[k]=='U')
        {
            vow1++;
        }
        if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U')
        {
            vow2++;
            printf("%d\n",vow2);
        }
    }
    
    if(vow1==vow2 )
    {
        ans=1;
    }
    printf("%d",ans);
    
    return 0;
    
}