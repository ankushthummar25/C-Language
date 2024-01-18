#include <stdio.h> 

int main() 
{ 
	int i=1,j; 

	while(i<=5)
	{ 
	j=1;
		while(j<=5) 
		{ 
			printf("%d ", j);
				j++;
		} 
		i++;
		printf("\n"); 
	} 
	return 0; 
}



/*

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

*/