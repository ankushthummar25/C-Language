#include<stdio.h>
int main()
{
	int a;
	printf("Enter the person voting:");
	scanf("%d",&a);

	if(a<18)
	{
	printf("%d is Not Voting",a);
	}else if(a>18)
		{
		printf("%d is voting",a);
		}

 return 0;
}