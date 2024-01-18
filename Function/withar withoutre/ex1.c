#include<stdio.h>

void sb(int a, int b)
{
	int c;
	if(a<b)
	{
		c=a;
	}else
	{
		c=b;
		}
		printf("%d is Smallest",c);
	
}

int main()
{
	int a,b;
	printf("Value of a:");
	scanf("%d",&a);
	printf("Value of b:");
	scanf("%d",&b);
	
	sb(a,b);
	
	
	return 0;
}


/*

Value of a:5
Value of b:10
5 is Smallest

*/