#include<stdio.h>
int main()
{
	char i,f;
	
	for(i=65;i<=70;i++)
	{
		for(f=65;f<i;f++)
		{
			printf("%c ",f);
		}
		printf("\n");
	}
	
	return 0;
}

/*

A
A B
A B C
A B C D
A B C D E

*/
	
	