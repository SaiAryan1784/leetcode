#include<stdio.h>

int main()
{
    int logs[4][2]={{0,3},{2,5},{0,9},{1,15}};
    int logsSize=4;

    int empid=0;
    int curtime=0;
    int prevtime=0;
    int unstime=0;
    int maxtime=0;
    int maxtimeid=0;

    for(int i=0;i<logsSize;i++)
    {
        empid=logs[i][0];

        curtime=logs[i][1];
        unstime=curtime-prevtime;

        prevtime=curtime;

        if(unstime>maxtime)
        {
            maxtime=unstime;
            maxtimeid=empid;
        }
        else if(unstime==maxtime)
        {
            if(empid<maxtimeid)
            {
                maxtimeid=empid;
            }
        }
    }
    printf("%d,%d",maxtimeid,maxtime);
}