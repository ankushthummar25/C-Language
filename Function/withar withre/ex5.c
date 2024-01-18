#include<stdio.h>

int pn(int a)
{
	int b;
	if(a>33)
	{
		b=a;
		printf("%d is pass",a);
	}else
	{
		b=a;
		printf("%d is Fail",a);
	}
	return b;
}

int main()
{
	int a,b;
	printf("Value is Pass or Fail a:");
	scanf("%d",&a);
	
	b=pn(a);
	
	return 0;
}

/*

Value is Pass or Fail a:32
32 is Fail

Value is Pass or Fail a:39
39 is pass

*/