#include<stdio.h>

void din(int a)
{
	int b;
	if(a%4==0)
	{
		b=a;
		printf("%d is Leap Year",b);
	}else
	{
		b=a;
		printf("%d is Not Leap Year",b);
	}
}

int main()
{
	int a;
	printf("Leap Year by or Not :");
	scanf("%d",&a);
	
	din(a);
	
	return 0;
}


/*

Leap Year by or Not :2024
2024 is Leap Year

Leap Year by or Not :2022
2022 is Not Leap Year

*/
	