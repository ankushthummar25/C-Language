#include<stdio.h>
int main()
{
	int a=10, b=15;
	a=++b;
	printf("a=%d,b=%d\n",a,b);
	a=b++;
	printf("a=%d,b=%d\n",a,b);
	a=--b;
	printf("a=%d,b=%d\n",a,b);
	a=b--;
	printf("a=%d,b=%d\n",a,b);


  return 0;
}