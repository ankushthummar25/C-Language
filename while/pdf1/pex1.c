#include <stdio.h> 
int main() 
{ 
	int i=1,j,n; 
	//printf("Number of rows: "); 
	//scanf("%d", &n); 

	while(i<=5)
		{ 
			j=1;

		while(j<=5) 
		{ 
			printf(" %d",i); 
			
			j++;
		}
		i++;
		
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