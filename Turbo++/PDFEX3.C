#include<stdio.h>
int main()
{
	float a,salary;
	printf("Enter the salary:");
	scanf("%f",&a);

	if(a<=5000)
	{
	salary =a+(a*0.08)+(a*0.20);
	}
	if(a>5000 && a<=10000)
	{
	salary = a+(a*0.12)+(a*0.30);
	}
	if(a>10000 && a<=15000)
	{
	salary = a+(a*0.15)+(a*0.40);
	}
	if(a>=15000)
	{
	salary = a+(a*0.20)+(a*0.50);
	}

	printf("%f is right salary",salary);

 return 0;
}
