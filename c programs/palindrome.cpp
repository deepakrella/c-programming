#include<stdio.h>
int main()
{
	int x,y,rev=0,temp;
	scanf("%d",&x);
	temp=x;
	while(x>0)
	{
		y=x%10;
		rev=rev*10+y;
		x=x/10;
	}
if(rev==temp)
{
	printf("its palindrome");
}
else
{printf("its not palindrome");
}
	return 0;
}
