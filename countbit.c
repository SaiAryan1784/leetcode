#include<stdio.h>

int main()
{
    int ans=1;
	int i = 1073741825;
    i &= (i-1);
    if(i)
    ans=0;
	printf("%d", ans);
	return 0;
}
