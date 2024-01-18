#include<stdio.h>
int main()
{
	int a;
	printf("Value divisible by 5 and 3or Not a:");
	scanf("%d",&a);

	if(a%5==0&&a%3==0)
	{
	printf("%d divisible 5 and 3",a);
	}
	if(a%5!=0&&a%3!=0)
	{
	printf("%d not divisible 5 and 3",a);
	}
  return 0;
}