#include<stdio.h>
int main()
{
    int i,n,b=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		b*=2;
	   printf("%d\n",b);
	}
 return 0;
} 


/*

2 
4 
8 
16
32
64
128
256
512
1024

*/