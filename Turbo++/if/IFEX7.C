#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Value of a:");
	scanf("%d",&a);
	printf("Value of b:");
	scanf("%d",&b);
	printf("Value of c:");
	scanf("%d",&c);

	if(a>b&&a>c)
	{
	printf("%d is Greatest",a);
	}
	if(b>a&&b>c)
	{
	printf("%d is Greatest",b);
	}
	if(c>a&&c>b)
	{
	printf("%d is Greatest",c);
	}

 return 0;
 }
