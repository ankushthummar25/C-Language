#include<stdio.h>
int main()
{
int a = 2;
int b = 5;
int c;

c=a;
a=b;
b=c;

	printf("%d\n",a);
	printf("%d\n",b);

  return 0;
}