#include<stdio.h>
int main()
{
	int a;
	printf("Enter value of find its divisible by 5 or not a:");
	scanf("%d",&a);

	a%5==0 ? printf("%d is divisible by 5",a):printf("%d is divisible not by 5 ",a);


  return 0;
}