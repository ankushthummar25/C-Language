#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the value A:");
	scanf("%d",&a);
	printf("Enter the value B:");
	scanf("%d",&b);
	printf("Enter the value C:");
	scanf("%d",&c);
	printf("Enter the value D:");
	scanf("%d",&d);


	if(a>b)
	{
		if(a>c && a>d)
		{
		printf("A is Great");
		}
	}else if(b>c && b>d)
	{
		printf("B is Great");
	}else if(c>a && c>b && c>d)
	{
		printf("C is Great");
	}else
	{
	printf("D is Great");
	}

return 0;
}
