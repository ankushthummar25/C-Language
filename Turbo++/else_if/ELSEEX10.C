#include<stdio.h>
int main()
{
	float a,salary;
	printf("Enter the salary:");
	scanf("%f",&a);

	if(a<=5000)
	{
	salary = a+(a*0.08)+(a*0.20);
	}else
	{
		if(a<=10000)
		{
		salary = a+(a*0.12)+(a*0.30);
		}else
		{
			if(a<=15000)
			{
			salary = a+(a*0.15)+(a*0.40);
			}else
			{
			salary = a+(a*0.20)+(a*0.50);
			}
		}
	}

	printf("%f is Right Salary",salary);

return 0;
}