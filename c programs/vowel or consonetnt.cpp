#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	
		if(a==97 || a==101 || a==105 || a==111 || a==117 || a==65 || a==69 || a==73 || a==79 || a==85 )
		{
			printf("its vowel");
		}
		else
		{
			printf("its consonant");
		}
		return 0;
}
