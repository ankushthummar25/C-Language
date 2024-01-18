#include <stdio.h> 

int main() 
{ 
	int i,a; 

	for (i=1; i<=5; i++)
	{ 
		for (a=1; a<=5; a++) 
		{ 
			printf("%d ", a); 
		} 
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