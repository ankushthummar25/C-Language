#include <stdio.h>
int main()
{
    int n,num,temp=1,i=1;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	do
	{
		num =i*temp;
		printf("%d\t",num);
		temp*=2;
		i++;
	}while(i<=n);
	
return 0;
}


/*

	1       4       12      32      80

*/
	