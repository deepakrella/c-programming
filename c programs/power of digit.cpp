#include<stdio.h>
#include<math.h>
int digitcount(int n)
{
	int count=0;
	while(n!=0)
	{
	count++;
	n=n/10;	
	}
	return count;
	
}
int main()
{
	int n,b1,power,b,sum=0;
	scanf("%d",&n);
	b=digitcount(n);
	while(n!=0)
	{
	b1=n%10;
	power=pow(b1,b);
	sum=sum+power;
	n=n/10;
	}
	printf("%d",sum);	
}
