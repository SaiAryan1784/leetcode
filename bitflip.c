#include<stdio.h>

int main()
{
    int start=3;
    int goal=4;

    int count=0;
    int i=0;
    
    while(goal || start)
    {
        if((goal&1) != (start&1))
        {
            count++;
            printf("if %d,%d,%d \n",start,goal,count);
        }
        start>>=1;
        goal>>=1;
        printf("%d,%d \n",start,goal);
    }
    printf("%d",count);
}