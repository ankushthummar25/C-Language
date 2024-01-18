#include<stdio.h>
int main()
{
	int a;
	printf("A person is eligible for voting or not :");
	scanf("%d",&a);


	if(a<18)
	{
	printf("%d is not voting",a);
	}
	if(a>=18)
	{
	printf("%d is voting",a);
	}

 return 0;
}