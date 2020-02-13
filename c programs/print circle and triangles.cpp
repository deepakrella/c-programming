#include<stdio.h>
int main()
{
	int x,y,sum=0,sum1=0,sum2=0,result;
	scanf("%d",&x);
while(x>0)
{
	y=x%10;
	if(y==6 || y==9 ||y==0)
	{
		sum=sum+1;
	}
	if(y==8)
	{
		sum1=sum1+2;
	}
	if(y==4)
	{
		sum2=sum2+2;
	}
	x=x/10;
}
result=sum+sum1+sum2;
printf("%d",result);
return 0;
}




