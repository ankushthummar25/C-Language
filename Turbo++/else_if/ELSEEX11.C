#include<stdio.h>
int main()
{
	float a,slab;
	printf("Enter The Slab:");
	scanf("%f",&a);


	if(a<=2500)
	{
	slab = a;
	}else
	{
		if(a<=5000)
		{
		slab = a+(a*0.10);
		}else
		{
			if(a<=10000)
			{
			slab = a+(a*0.20);
			}else
			{
			slab = a+(a*0.30);
			}
		}
	}

	printf("%f is right slab",slab);

 return 0;



}