#include<stdio.h>
int main()
{
	float a;
	printf("Enter the Marks:");
	scanf("%f",&a);

	if(a>=75)
	{
	printf("%f Gread A",a);
	}
	if(a>60 && a<=75)
	{
	printf("%f Gread B",a);
	}
	if(a>45 && a<=60)
	{
	printf("%f Gread C",a);
	}
	if(a>35 && a<=45)
	{
	printf("%f Gread D",a);
	}
	if(a<=35)
	{
	printf("%f is Fail",a);
	}

 return 0;
}

