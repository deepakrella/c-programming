#include<stdio.h>
int iperfectno(int y)
{
	int i,p=0;
	for ( i=1;i<=(y/2);i++)
	{
		if(y%i==0)
		{
			p=p+i;
		}
	
	 }
	if(p==y)
	{	
	printf("%d ",p);
	return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a,n1,n2,x,count=0;
	scanf("%d",&n1);
	scanf("%d",&n2);
	for(a=n1;a<=n2;a++)
	{
		x=iperfectno(a);
		if(x==1)
		{
			count++;	
		} 
	}
	printf("%d",count);
	return 0;
}
