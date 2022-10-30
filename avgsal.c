#include<stdio.h>
int main()
{
    int salary[]={3000,1000,2000,4000};
    int salarySize=4;
    int j=0;
    int sum=0;
    int avg;

    for(int i=1; i<salarySize; i++)
    {
        if(salary[j]<salary[i])
        {
            j=i;
        }
    }
    printf("%d \n",salary[j]);

    int k=0;

    for(int i=1; i<salarySize; i++)
    {
        if(salary[k]>salary[i])
        {
            k=i;
        }
    }
    printf("%d \n", salary[k]);

    for(int i=0; i<salarySize; i++)
    {
        if(i!=k && i!=j)
        sum = sum + salary[i];
    }
    avg=sum/(salarySize-2);
    printf("avg is : %d",avg);
}