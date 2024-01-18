#include<stdio.h>
int main()
{
	int a;
	printf("value is pass or fail a:");
	scanf("%d",&a);

	a>33 ? printf("%d is Pass",a):printf("%d is fail",a);

  return 0;
}