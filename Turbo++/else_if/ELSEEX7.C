#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Value a:");
	scanf("%d",&a);
	printf("Enter Value b:");
	scanf("%d",&b);
	printf("Enter Value c:");
	scanf("%d",&c);

	if(a>b && a>c)
	{
	printf("%d is Greatest",a);
	}else
	if(b>a && b>c)
	{
	printf("%d is Greatest",b);
	}else
	{
	printf("%d is Greatest",c);
	}

	return 0;
}