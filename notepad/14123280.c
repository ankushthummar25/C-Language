#include <stdio.h>
int main()
{
    int n,num,nu1,temp=1,i;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		num =i*temp;
		printf("%d\t",num);
		temp*=2;
	}
	
return 0;
}

/*

enter the value of n:10
1       4       12      32      80      192     448     1024    2304    5120


*/
	