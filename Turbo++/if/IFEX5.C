#include<stdio.h>
int main()
{
	int a;
	printf("Mark Pass or Fail a:");
	scanf("%d",&a);

	if(a>33)
	{
	printf("%d is Pass",a);
	}
	if(a<33)
	{
	printf("%d is Fail",a);
	}


  return 0;
}