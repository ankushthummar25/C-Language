#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value A:");
	scanf("%d",&a);
	printf("Enter the value B:");
	scanf("%d",&b);
	printf("Enter the value C:");
	scanf("%d",&c);

	if(a>b)
	{
		if(a>c)
		{
		printf("%d is Greatest",a);
		}
	}else if(b>c)
	{
		printf("%d is Greatest",b);
	}else
	{
	printf("%d is Greatest",c);
	}

 return 0;
}