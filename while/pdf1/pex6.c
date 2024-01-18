#include<stdio.h>
int main()
{
	int i=1,j,n;
	
	while(i<=10)
	{
		j=1;
		while(j<=5)
		{
			if(i%2==1)
			{
				printf(" %d",i);
			}
				j++;
		}
		printf("\n");
		i++;
	}
	
	return 0;
}


/*

1  1  1  1  1

3  3  3  3  3

5  5  5  5  5

7  7  7  7  7

9  9  9  9  9
  
*/