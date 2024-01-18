#include <stdio.h>
int main()
{
    int i=1,j,a=65;
	
	do
	{
		j=1;	
		do
		{
			printf("%c ",a++);
			j++;
		}while(j<=i);
		printf("\n");
		i++;
	}while(i<=5);
return 0;
}  

/*

A
B C
D E F
G H I J
K L M N O

*/