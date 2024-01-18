#include<stdio.h>
int main()
{
		int i,n;

		printf("Enter the Value :");
		scanf("%d",&n);

		for(i=1;i<=n;i++)
		{
			printf("%d\t",i*i);
		}
		
	return 0;
}

/*

Enter the Value :10
1       4       9       16      25      36      49      64      81      100


*/