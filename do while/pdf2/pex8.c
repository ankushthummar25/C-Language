#include <stdio.h>
int main()
{
    int i=1,j;
	int a=65,b=97; 
	
	do
	{
		j=1;
		do
		{
			if(j%2==0)
			{
				printf(" %c",a);
			}else
				{
					printf(" %c",b);
				}
						j++;
						b++;
						a++;
		}while(j<=i);
		printf("\n");
		i++;
	}while(i<=5);
return 0;
}  

/*

 a
 b C
 d E f
 g H i J
 k L m N o
 
*/
