#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	while(x<=y)
	{
	if(x%3==0 && x%5==0){
		printf("%d",x);
	}
	x++;
	}
	return 0;
}
