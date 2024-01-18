#include <stdio.h>
int main()
{
    int n,num,temp=1,i=0;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	while(i<=n)
	
	{
		i++;
		num =i*temp;
		printf("%d\n",num);
		temp*=2;
	}
	
return 0;
}
	
	
/*

	1
	4
	12
	32
	80
	192

*/