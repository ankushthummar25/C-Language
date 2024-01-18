#include<stdio.h>
int main()
{
	int a,bill;
	printf("Enter Value Of a:");
	scanf("%d",&a);

	if(a<=100)
	{
	bill = a*0.6;
	}
	if(a>=100 && a<=300)
	{
	bill = 60+(a-100)*0.8;
	}
	if(a>=300)
	{
	bill = 60+160+(a-300)*0.9;
	}
	if(a<=50)
	{
	bill=50;
	}
	if(a>=300)
	{
	bill =bill+bill*0.15;
	}

	printf("%d is Price",bill);

	return 0;
}