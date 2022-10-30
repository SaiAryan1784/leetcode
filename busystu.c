#include<stdio.h>
int main()
{
    int startTime[] = {4};
    int startTimeSize = 1;
    int endTime[] = {4};
    int endTimeSize = 1; 
    int queryTime = 4;
    int count=0;

    for(int i=0; i<startTimeSize; i++)
    {
        if(startTime[i]<=queryTime && endTime[i]>=queryTime)
        {
            count++;
        }
    }
    printf("%d",count);
}