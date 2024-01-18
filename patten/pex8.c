#include <stdio.h>
int main()
{
    int i,j;
	int a=65,b=97; 
	
	for(i=1;i<=5;i++)
	{
		for(j=1; j<=i; j++)
		{
			if(j%2==0)
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

 a
 b C
 d E f
 g H i J
 k L m N o
 
*/
