#include<stdio.h>

int sb(int a, int b)
{
	int c;
	if(a<b)
	{
		c=a;
	}else
	{
		c=b;
		}
		return c;
	
}

int main()
{
	int a,b,c;
	printf("Value of a:");
	scanf("%d",&a);
	printf("Value of b:");
	scanf("%d",&b);
	
	c=sb(a,b);
	printf("%d is Smallest",c);
	
	
	return 0;
}

/*

Value of a:5
Value of b:10
5 is Smallest

*/
