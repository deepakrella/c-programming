#include<stdio.h>
int main()
{
	int x,y,low=10,high=0;
	scanf("%d",&x);
	while(x>0)
	{
		y=x%10;
        if(y>=high)
        {
        high=y;	
		}
		if(y<=low)
        {
        low=y;	
		}
		x=x/10;
	}
printf("%d\t%d",low,high);
return 0;
}
