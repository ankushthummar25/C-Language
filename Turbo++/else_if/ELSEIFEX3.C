#include<stdio.h>
int main()
{
	int a,bill;
	printf("Enter the value:");
	scanf("%d",&a);

	if(a<=100)
	{
	bill = a*0.6;
	}else if(a<=300)
		{
		bill = 60+(a-100)*0.8;
		}else
		{
		bill = 60+160+(a-300)*0.9;
		}
	if(bill<=50)
	{
	bill = 50;
	}else if(bill>=300)
		{
		bill =bill+bill*0.15;
		}else
		{
		bill = bill;
		}
	printf("%d is Price",bill);

	return 0;
}