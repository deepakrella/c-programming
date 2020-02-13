#include<stdio.h>
int main()
{
	int i=1,x,sum=0;
	scanf("%d",&x);
	while(i<=x)
	{
		if(i%2==0)
		{
		 sum=sum+i;
		}
	i++;
	
	}
	printf("sum=%d",sum);
	return 0;
}
