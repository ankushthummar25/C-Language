#include<stdio.h>

void pn(int a)
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
}

int main()
{
	int a;
	printf("Value is Pass or Fail a:");
	scanf("%d",&a);
	
	pn(a);
	
	return 0;
}

/*

Value is Pass or Fail a:32
32 is Fail

Value is Pass or Fail a:39
39 is pass

*/