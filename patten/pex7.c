#include <stdio.h>
int main()
{
    int i,j;
	int a=65,b=97; 
	
	for(i=1;i<=5;i++)
	{
		for(j=1; j<=i; j++)
		{
			if(i%2==1)
			{
				printf(" %c",a);
			}else
				{
					printf(" %c",b);
				}
						b++;
						a++;
		}
			printf("\n");
	}
return 0;
}  

/*

 A
 b c
 D E F
 g h i j
 K L M N O
 
*/
