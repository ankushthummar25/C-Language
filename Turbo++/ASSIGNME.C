#include <stdio.h>
int main()
{
	int a=5 , b=10 , c=15;
	a=b;
	printf("%d\n",a);
	a+=c;
	printf("%d\n",a);
	c-=b;
	printf("%d\n",c);
	a*=b;
	printf("%d\n",a);
	a/=c;
	printf("%d\n",a);
	c%=b;
	printf("%d\n",c);


   return 0;
}