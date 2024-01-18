#include<stdio.h>
int main()
{
	float a,slab;
	printf("Enter the slab:");
	scanf("%f",&a);

	if(a<=2500)
	{
	slab = a;
	}
	if(a>2500 && a<=5000)
	{
	slab = a+(a*0.10);
	}
	if(a>5000 && a<=10000)
	{
	slab = a+(a*0.20);
	}
	if(a>=10000)
	{
	slab = a+(a*0.30);
	}

	printf("%f is right slab",slab);

  return 0;
}