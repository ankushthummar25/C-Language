#include<stdio.h>
int main()
{
	char i=65,f;
	
	do
	{
		f=65;
		do
		{
			printf("%c ",f);
			f++;
		}while(f<=i);
		
		printf("\n");
		i++;
	}while(i<=69);
			
	
	return 0;
}

/*

A
A B
A B C
A B C D
A B C D E

*/
	
	