#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	while(x>0)
	{
		y=x%10;
		printf("\t%d",y);
		x=x/10;
	}

	return 0;
}
