#include<stdio.h>
int main()
{
	int a;
	printf("find its leap year or not a:");
	scanf("%d",&a);

	if(a%4==0)
	{
	printf("%d is leap year",a);
	}
	if(a%4!=0)
	{
	printf("%d is Not leap year",a);
	}


  return 0;
}