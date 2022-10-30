#include<stdio.h>

int find_unvisit(int numsSize,int vis[]);
    
int main(){
    int nums[]={2,2,3,3};
    int numsSize=4;
    int dup[10001]={0};
    int vis[10001]={0};
    int max[10001];
    int i;
    int k;
    int dupcount=0;
    int cand=0;
    int maxcount=0;
    
 while(((cand = find_unvisit(numsSize,vis))>=0) && maxcount<3)
 {
    printf("Cand = %d\n", nums[cand]);

    for(i=cand; i<numsSize; i++)
    {
        if(vis[i]==1)
            continue;
        
        if(nums[cand]<nums[i])
        {
            cand=i;
            printf("Cand = %d\n", nums[cand]);
            dupcount=0;
            dup[dupcount]=i;
            dupcount++;
        }
        else if(nums[cand]==nums[i])
        {
            dup[dupcount]=i;
            dupcount++;
        }
    }
    max[maxcount]=nums[cand];
    maxcount++;
    
    for(k=0; k<dupcount; k++)
    {
        int n=dup[k];
        vis[n]=1;
    }
 }

 if (maxcount ==3)
 {
    printf("Third max = %d\n", max[2]);
    return max[2];
 }
 else
 {
    printf("max = %d\n", max[0]);
    return max[0];

 }
 return max[0];
}
   
int find_unvisit(int numsSize,int vis[])
{
    for(int i=0; i<numsSize; i++)
    {
        if(vis[i]==0)
        {return i;}
        
    }
    return -1;
}