#include<stdio.h>
int main()
{
    int i=1,n,b=1;
	
	scanf("%d",&n);

	do
	{
		b*=2;
	   printf("%d\n",b);
	   i++;
	}while(i<=n);
 return 0;
} 


/*

	2
	4
	8
	16
	32

*/