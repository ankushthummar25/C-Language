#include<stdio.h>
int main()
{
	int i=1,j,h=11;
	
	while(i<=5)
	{
		j=1;
		while(j<=5)
		{
			printf(" %d",h++);
			j++;
		}
		i++;
		printf("\n");
			h+=5;
	}
	return 0;
}


/*

11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
41 42 43 44 45
51 52 53 54 55
 
*/