#include <stdio.h>
int main()
{
	int a,b;

	printf("Please enter the value of a:");
	scanf("%d",&a);
	printf("Please enter the value of b:");
	scanf("%d",&b);

       a<b? printf("%d is Greatest",a):printf("%d is Greatest",b);

	return 0;
}