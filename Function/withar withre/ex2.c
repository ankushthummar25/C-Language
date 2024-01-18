#include<stdio.h>

int pn(int a)
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
	return b;
}

int main()
{
	int a,b;
	printf("Value is Positive or Negative a:");
	scanf("%d",&a);
	
	b=pn(a);
	
	
	
	return 0;
}


/*

Value is Positive or Negative a:10
10 is positive

Value is Positive or Negative a:-10
-10 is Negative

*/