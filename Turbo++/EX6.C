#include<stdio.h>
int main()
{
	int a;
	printf("value its leap year or not a:");
	scanf("%d",&a);

	a%4==0 ? printf("%d is leap year",a):printf("%d is not leap year",a);

  return 0;
}