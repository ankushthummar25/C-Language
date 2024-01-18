#include<stdio.h>
int main()
{
	int i=1,f;
	
	do
	{
		f=1;
		do
		{
			printf("* ");
			f++;
		}while(f<=i);
		printf("\n");
		i++;
	}while(i<=5);
	
	return 0;
}

/*

*
* *
* * *
* * * *
* * * * *

*/