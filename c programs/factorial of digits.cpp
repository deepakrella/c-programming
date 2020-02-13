#include<stdio.h>
int main()
{
int rev=0,sum=0,n,buffer,i;
scanf("%d",&n);
buffer=n;
while(n!=0)
{ 
    int fact=1;
	rev=n%10;
	for (i=1;i<=rev;i++)
	{
		fact=fact*i;
	 }
	 sum=sum+fact;
	n=n/10;  
}
if(buffer==sum)
{
	printf("yes");
}
else
printf("no");
}
