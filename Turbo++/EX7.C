#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Value of a:");
	scanf("%d",&a);
	printf("Value of b:");
	scanf("%d",&b);
	printf("Value of c:");
	scanf("%d",&c);

    a>b&&a>c ? printf("a is Greatest"): b>a&&b>c ? printf("b is Greatest"):printf("c is Greatest");


  return 0;
}