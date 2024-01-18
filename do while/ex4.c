#include<stdio.h>
int main()
{
		int i=1,n;
		
		printf("Enter the NUmber:");
		scanf("%d",&n);
		
		do
		{
			printf("%d\t",i*i);
			i++;
		}while(i<=n);
		
	return 0;
}


/* 

	1       4       9       16      25

*/