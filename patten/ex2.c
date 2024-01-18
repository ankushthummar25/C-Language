#include<stdio.h>
int main()
{
	int i,a;
	
	for(i=5; i>=1; i--)
	{
		for(a=5; a>=1; a--)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}

return 0;
}


/*

5       5       5       5       5
4       4       4       4       4
3       3       3       3       3
2       2       2       2       2
1       1       1       1       1

*/