#include<stdio.h>

int main()
{
    //int arr[]={5,4,7,8,4,8,8,3,7,7,6,3,7,6,5,6,8,4,5,7,4,7,7,5,2,5,6,6,8,1,6,8,8,8,9,3,2,9};
    int arr[]={2, 2, 2, 4, 5};
    int arrSize=5;
    
    int freq[501]={0};

    int l=0;  // Stores current maximum
    
    for(int i=0; i<arrSize; i++)
    {
        freq[arr[i]]++;
    }

    for(int i=0; i<arrSize; i++)
    {
        // Check if it is lucky number.
        // If yes, checkif it isgreater than current max
        if(arr[i]==freq[arr[i]] && arr[i] > l)
        {
            l = arr[i];
        }
    }
    
    //   No lucky number got, return -1
    if (l==0)
        l=-1;
        
        printf("%d",l);
//return l;
}