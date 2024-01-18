#include<stdio.h>
int main()
{
	int i=1,j,f=65;
	
	while(i<=5)
	{
		j=1;
		while(j<=5)
		{
			printf(" %c",f++);
			j++;
		}
		i++;
		printf("\n");
	}
	return 0;
}


/*

A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y
 
*/