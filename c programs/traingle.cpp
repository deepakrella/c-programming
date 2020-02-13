#include<stdio.h>
int main()
{
	int a,b,c,x;
	scanf("%d%d%d",&a,&b,&c);
	if(a>0 && b>0 && c>0 &&(a+b+c==180))
		{
			printf("its a traingle");
		}
		else{
			printf("its not traingle");
		}
	return 0;
}
