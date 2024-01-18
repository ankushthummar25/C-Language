#include<stdio.h>

int din(int a)
{
	int b;
	if(a%5==0 && a%3==0)
	{
		b=a;
		printf("%d is Divisible",b);
	}else
	{
		b=a;
		printf("%d is Not Divisibe",b);
	}
	return b;
}

int main()
{
	int b,a;
	printf("Divisible by 5 and 3 or Not :");
	scanf("%d",&a);
	
	b=din(a);
	
	return 0;
}


/*

Divisible by 5 or Not :15
15 is Divisible

Divisible by 5 or Not :17
17 is Not Divisibe

*/
	