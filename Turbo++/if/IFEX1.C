#include <stdio.h>
int main()
{

	int a,b;
	printf("Value of a:");
	scanf("%d",&a);
	printf("Value of b:");
	scanf("%d",&b);

	if(a>b)
	{
	printf("%d is Smallest",a);
	}
	if(b>a)
	{
	printf("%d is Small",b);
	}

   return 0;
}