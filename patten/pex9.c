#include <stdio.h>
int main()
{
    int i,f,a=65;
	for(i=1;i<=6;i++)
	{
		for(f=1;f<i;f++)
		{
			printf("%c ",a++);
		}
		printf("\n");
	}
return 0;
}  

/*

A
B C
D E F
G H I J
K L M N O

*/