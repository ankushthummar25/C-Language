#include <stdio.h> 

int main() 
{ 
	int i,a,n; 
	printf("Number of rows: "); 
	scanf("%d", &n); 

	for (i=1; i<=n; i++)
		{ 

		for (a=1; a<=n; a++) 
		{ 
			printf("%d ", i); 
		} 
		printf("\n"); 
	} 
	return 0; 
}



/*


1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

*/