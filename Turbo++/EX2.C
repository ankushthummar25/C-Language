#include<stdio.h>
int main()
{
	int a;
	printf("value is positive or negative a:");
	scanf("%d",&a);

	a>0 ? printf("%d is Positive",a):printf("%d is negative",a);

  return 0;
}