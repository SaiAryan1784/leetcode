#include<stdio.h>
int main()
{
    int prices[]={8,4,6,2,3};
    int pricesSize=5;
    int returnprice[pricesSize];

    for(int i=0,j=1; i<pricesSize && j<pricesSize; j++)
    {
        if(prices[i]>=prices[j])
        {
            returnprice[i]=prices[i]-prices[j];
            i++;
        }
        else if(j==pricesSize-1)
        {
            returnprice[i]=prices[i];
            i++;
        }
    }
    for(int i=0; i<pricesSize; i++)
    {
        printf("%d",returnprice[i]);
    }
}