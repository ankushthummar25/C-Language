#include <stdio.h> 

int main() 
{ 
	int i,a; 

	for (i=5; i>=1; i--)
	{ 
		for (a=5; a>=i; a--) 
		{ 
			printf("%d ",a); 
		} 
		printf("\n"); 
	} 
	return 0; 
}


/*

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

*/