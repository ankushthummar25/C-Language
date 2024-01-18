#include<stdio.h>
int main()
{
	int a;
	printf("value divisible by 5 and 3 or not a:");
	scanf("%d",&a);

	a%5==0&&a%3==0 ? printf("%d is True",a):printf("%d is False",a);

  return 0;
}