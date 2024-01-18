#include <stdio.h>
int main()
{

  int i=1,j,k=65;

	do{
		j=1;
		
		do{
			
			if(i%2==0){
			printf("%d \t",j);
			}else{
				printf("%c \t",k);
			}
			j++;
			k++;
		}while(j<=i);
	
		printf("\n");
		
		i++;
	}while(i<=5);
	
   
  return 0;
}


/*  output 

A
1       2
D       E       F
1       2       3       4
K       L       M       N       O

*/ 
