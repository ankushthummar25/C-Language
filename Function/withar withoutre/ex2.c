#include<stdio.h>

void pn(int a)
{
	int b;
	if(a>0)
	{
		b=a;
		printf("%d is positive",a);
	}else
	{
		b=a;
		printf("%d is Negative",a);
	}
}

int main()
{
	int a;
	printf("Value is Positive or Negative a:");
	scanf("%d",&a);
	
	pn(a);
	
	return 0;
}

/*

Value is Positive or Negative a:10
10 is positive

Value is Positive or Negative a:-10
-10 is Negative

*/