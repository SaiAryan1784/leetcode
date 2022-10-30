#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int arrSize=5;
    int k=5;
    int ans;

    for(int i=1,j=0,l=0; j<=k; i++)
    {
        if(l<arrSize && i==arr[l])
        {
            printf("if %d \n",i);
            l++;
            continue;
        }
        else
        {
            printf("else %d \n",i);
            j++;
        }
        if(j==k)
        {
            ans=i;
            printf("%d",ans);
            break;
        }
    }
    return 0;
}