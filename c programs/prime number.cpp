#include<stdio.h>
int primeno(int n)
{   int i,flag=0;
	for (i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int i,n1,n,r;
	scanf("%d%d",&n1,&n);
	for(i=n1;i<=n;i++)
	{
		r=primeno(i);
		if(r==1)
		{
			printf("%d",i);
		}
	}
	return 0;
}
