#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	while(x>0)
	{
		y=x%10;
		switch(y)
		{
			case 0:
				printf("zero\t");
				break ;
			case 1:
				printf("one\t");
				break ;
			case 2:
				printf("two\t");
				break ;
			case 3:
				printf("three\t");
				break ;
			case 4:
				printf("four\t");
				break ;
			case 5:
				printf("five\t");
				break ;
			case 6:
				printf("six\t");
				break ;
			case 7:
				printf("seven\t");
				break ;
			case 8:
				printf("eight\t");
				break ;
			case 9:
				printf("nine\t");
				break ;
			default:
			    printf("\t");
				break;			
		}
		x=x/10;
	}

return 0;
}
