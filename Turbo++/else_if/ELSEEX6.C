#include<stdio.h>
int  main()
{
	int a;
	printf("Enter the Year:");
	scanf("%d",&a);

	if(a%4==0)
	{
	printf("%d is Leap Year",a);
	}else
	{
	printf("%d is Not Leap Year",a);
	}

 return 0;
}