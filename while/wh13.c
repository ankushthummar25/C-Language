#include<stdio.h>
int main()
{ 
	int i=3,n,a=0,b=1,c;
	
	printf("Enter the Number:");
	scanf("%d\n",&n);
	
	while(i<=n)
	{
		i++;
	
		printf("%d\n",c);
			a=b;
			b=c;
			c=a+b;
	}
	
	return 0;
}



/*

	0
	1
	1
	2
	3
	5
	8
	13

*/