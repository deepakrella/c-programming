#include<stdio.h>
int main()
{
	char i;
	scanf("%c",&i);
		if(i>=65 && i<=90)
		{
			printf("its upper cse");
		}
		if(i>=97 && i<=122)
		{
			printf("its lower cse");
		}

		if(i>=48 && i<=57)
		{
			printf("its digit");
		}
	return 0;
}
	
