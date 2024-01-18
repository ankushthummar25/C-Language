#include<stdio.h>
int main()
{
	int i=1,j,n;
	printf("Enter the value :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			printf("  %d",i*2);
			j++;
		}
		i++;
		printf("\n");
	}
	
	return 0;
}


/*

2    2   2   2   2
4    4   4   4   4
6    6   6   6   6
8    8   8   8   8
10   10  10  10  10

*/