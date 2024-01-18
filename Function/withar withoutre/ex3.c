#include<stdio.h>

void din(int a)
{
	int b;
	if(a%5==0)
	{
		b=a;
		printf("%d is Divisible",b);
	}else
	{
		b=a;
		printf("%d is Not Divisibe",b);
	}
}

int main()
{
	int a;
	printf("Divisible by 5 or Not :");
	scanf("%d",&a);
	
	din(a);
	
	return 0;
}


/*

Divisible by 5 or Not :15
15 is Divisible

Divisible by 5 or Not :17
17 is Not Divisibe

*/
	