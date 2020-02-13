#include<stdio.h>
int ispal(int n)
{
	int i,fact=1;
	for ( i=n;i>0;i--)
	{
		fact=fact*i;
	 }
	 return fact;
}
int main()
{
	int n,rev,sum=0;
	scanf("%d",&n);
	int buffer=n;
	while(n!=0)
	{
		rev=n%10;
		n=n/10;
		sum=sum+ispal(rev);
	}
	if(buffer==sum)
{
	printf("yes");
}
else
printf("no");
}
