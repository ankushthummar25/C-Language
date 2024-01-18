#include<stdio.h>
int  main()
{
	int a;
	printf("Value is Positive or Negative a:");
	scanf("%d",&a);

	if(a>0)
	{
	printf("%d is Positive",a);
	}
	if(a<0)
	{
	printf("%d is Negative",a);
	}

	return 0;
}