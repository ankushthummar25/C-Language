#include<stdio.h>
int main()
{
	int  a;
	printf("Enter the marks:");
	scanf("%d",&a);

	if(a>33)
	{
	printf("%d is Pass",a);
	}else
	{
	printf("%d is Fail",a);
	}

 return 0;
}