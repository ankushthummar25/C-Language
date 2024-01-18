#include<stdio.h>
int main()
{
	int a;
	printf("Enter the Value:");
	scanf("%d",&a);

	if(a%5==0 && a%3==0)
	{
	printf("%d is a Divisible",a);
	}else
	{
	printf("%d is a Not Divisible",a);
	}

 return 0;
}
