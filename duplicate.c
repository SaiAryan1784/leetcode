#include<stdio.h>
#include<string.h>

char * removeDuplicates(char * s)
{
    char a[]="s";
    strcpy=(a, s);
    
    for(int i=1,j=0; s[i]!='\0'; i++)
    {
        if(s[i-1]==s[i])
        {
            continue;
        }
        else
        {
            s[j]=s[i-1];
            j++;
        }
    }
    if(s!=a)
        {removeDuplicates(s);}
    else 
        return s;
    
    return s;
}

int main()
{
    char s[]="abbaca";

    removeDuplicates(s);
}