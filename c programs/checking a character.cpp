#include<stdio.h>
int main()
{
	char a,i;
	scanf("%c",&a);
	for(i=65;i<=90;i++)
	{
		if(a==i)
		{
			printf("its upper cse");
		}
	}
	for(i=97;i<=122;i++)
		{
		if(a==i)
		{
			printf("its lower cse");
		}
	}
	for(i=48;i<=57;i++)
		{
		if(a==i)
		{
			printf("its digit");
		}
	}
	return 0;
	
}
