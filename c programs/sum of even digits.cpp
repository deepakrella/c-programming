#include<stdio.h>
int main()
{
	int x,y,sum=0;
	scanf("%d",&x);
	while(x>0)
	{
		y=x%10;
        if (y%2==0)
        {
        	sum=sum+y;
		}
		x=x/10;
	}
printf("%d",sum);
return 0;
}
