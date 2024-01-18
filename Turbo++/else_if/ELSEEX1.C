#include<stdio.h>
int main()
{
	int a,b;
	printf("value of a:");
	scanf("%d",&a);
	printf("value of b:");
	scanf("%d",&b);

	if(a>b)
	{
	printf("%d is smallest",b);
	}else
	{
	printf("%d is smallest",a);
	}

 return 0;
}